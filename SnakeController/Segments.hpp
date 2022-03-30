#pragma once
#include <list>

#include "SnakeInterface.hpp"
#include "Segment.hpp"

class Segments{

    public:
    Segments() {};

    void addSegment(Segment position);

    std::list<Segment> getSegment();

    bool isSegmentAtPosition(int x, int y) const;

    private:
    // Position nextHead() const;
    std::list<Segment> m_segments{};

};