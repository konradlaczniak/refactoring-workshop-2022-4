#include "Segments.hpp"

#include <algorithm>


void Segments::addSegment(Segment position)
{
    m_segments.emplace_back(position);
};

std::list<Segment> Segments::getSegment()
{
    return m_segments;
};

// Po wprowadzeniu ponizszej metody niestety wystapily bledy mimo poprawnej kompilacji

bool Segments::isSegmentAtPosition(int x, int y) const{
    return m_segments.end() !=  std::find_if(m_segments.cbegin(), m_segments.cend(),
        [x, y](auto const& segment){ return segment.x == x and segment.y == y; });
};
