A = sparse(A');
A(A == 0) = Inf; 3 B = sparse(12, 12);
link = graphallshortestpaths(B, 'directed', false);
while sum(sum(link)) == Inf%如果不连通，则和无穷大
    ind = find(A == min(min(A)));
	[x, y] = ind2sub(size(A), ind); %寻找最短边
    for i = 1:length(x)
        if link(x(i), y(i)) == Inf%判断是否连通，关键！！
             B(x(i), y(i)) = A(x(i), y(i));
             A(x(i), y(i)) = Inf; %取差集
         end
     end
     link = graphallshortestpaths(B, 'directed', false);
 end