<!--prettier-ignore-->
#errorCatcher Echo
#encoding UTF-8

<script
  type="module"
  src="https://1.www.s81c.com/common/carbon/web-components/version/v1.21.0/structured-list.min.js"
></script>

<script
  type="module"
  src="https://1.www.s81c.com/common/carbon/web-components/version/v1.21.0/tooltip.min.js"
></script>

<div class="bx--tile climatological-tile">
  <bx-structured-list>
    <bx-structured-list-head>
      <bx-structured-list-header-row>
        <bx-structured-list-header-cell
          >$gettext("Climatological day")</bx-structured-list-header-cell
        >
        <bx-structured-list-header-cell>Number</bx-structured-list-header-cell>
        <bx-structured-list-header-cell
          >Description</bx-structured-list-header-cell
        >
      </bx-structured-list-header-row>
    </bx-structured-list-head>
    <bx-structured-list-body>
      #for $clim_day in $DisplayOptions.get('climatological_days')
      <bx-structured-list-row>
        <bx-structured-list-cell>$gettext($clim_day)</bx-structured-list-cell>
        <bx-structured-list-cell>
          <!--prettier-ignore-->
          $get_climatological_day($clim_day, $get_time_span_from_attr($precision, $day, $week, $month, $year, $alltime), $unit.unit_type, $unit.label)
        </bx-structured-list-cell>
        <bx-structured-list-cell>
          <div data-floating-menu-container style="position: relative">
            <bx-tooltip>
              <bx-tooltip-body>
                <p>
                  <!--prettier-ignore-->
                  $get_climatological_day_description($clim_day, $unit.label, $obs.label, $unit.unit_type)
                </p>
              </bx-tooltip-body>
            </bx-tooltip>
          </div>
          <span>
            <!--prettier-ignore-->
            $get_climatological_day_description($clim_day, $unit.label, $obs.label, $unit.unit_type)
          </span>
        </bx-structured-list-cell>
      </bx-structured-list-row>
      #end for
    </bx-structured-list-body>
  </bx-structured-list>
</div>