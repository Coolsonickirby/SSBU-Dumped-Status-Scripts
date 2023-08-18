
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSzerosuit::status::SpecialS_main_loop(L2CFighterSzerosuit *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  long lVar8;
  Hash40 HVar9;
  ulong uVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  ppBVar11 = &this->moduleAccessor;
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar6 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack128);
LAB_71000100ec:
    bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    this_00 = &this->globalTable;
    if ((bVar2 & 1U) == 0) {
LAB_7100010218:
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_AIR_LASSO_FLAG_CHECK);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar3);
LAB_710001036c:
        lib::L2CValue::_L2CValue(aLStack112);
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_AIR_LASSO_FLAG_CHECK);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_AIR_LASSO_FLAG_IS_CHECK);
          iVar3 = lib::L2CValue::as_integer(aLStack144);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
          lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack112,true);
          uVar6 = lib::L2CValue::operator__(aLStack128,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack112,FIGHTER_CLIFF_HANG_DATA_DEFAULT);
            uVar4 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::GroundModule__select_cliff_hangdata_impl(*ppBVar11,uVar4);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_AIR_LASSO_FLAG_IS_CHECK);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar3);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SZEROSUIT_GENERATE_ARTICLE_WHIP2);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::ArticleModule__remove_exist_impl(*ppBVar11,iVar3,0);
            goto LAB_710001036c;
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_AIR_LASSO_FLAG_IS_CHECK);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar3);
          lib::L2CValue::_L2CValue(aLStack112);
          lua2cpp::L2CFighterCommon::sub_fighter_general_term_is_cliff_check_pos(this);
          lib::L2CValue::L2CValue(aLStack112,true);
          uVar6 = lib::L2CValue::operator__(aLStack128,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack304,_FIGHTER_STATUS_KIND_AIR_LASSO_REACH);
            lib::L2CValue::L2CValue(aLStack320,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xd0,(L2CValue)0xc0);
            lib::L2CValue::_L2CValue(aLStack320);
            lib::L2CValue::_L2CValue(aLStack304);
            iVar3 = 1;
            goto LAB_7100010dd8;
          }
        }
      }
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_S_FLAG_S2_UNABLE);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar6 = lib::L2CValue::operator__(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_S_FLAG_S2_CHECK);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack144);
LAB_71000105a4:
          lib::L2CValue::L2CValue(aLStack144,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_S_FLAG_S2);
          iVar3 = lib::L2CValue::as_integer(aLStack144);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
          lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack112,true);
          uVar6 = lib::L2CValue::operator__(aLStack128,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((uVar6 & 1) == 0) goto LAB_7100010890;
          lib::L2CValue::L2CValue(aLStack112,0xb03f7f556);
          lib::L2CValue::L2CValue
                    (aLStack128,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND);
          lVar8 = lib::L2CValue::as_integer(aLStack112);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int64_impl(*ppBVar11,lVar8,iVar3);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,0xff465f061);
          lib::L2CValue::L2CValue
                    (aLStack128,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND_AIR);
          lVar8 = lib::L2CValue::as_integer(aLStack112);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int64_impl(*ppBVar11,lVar8,iVar3);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
          uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0xff465f061);
            HVar9 = lib::L2CValue::as_hash(aLStack112);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (*ppBVar11,HVar9,-1.0,1.0,0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SZEROSUIT_GENERATE_ARTICLE_WHIP);
            lib::L2CValue::L2CValue(aLStack128,0xff465f061);
            lib::L2CValue::L2CValue(aLStack144,true);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            HVar9 = lib::L2CValue::as_hash(aLStack128);
            bVar1 = lib::L2CValue::as_bool(aLStack144);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*ppBVar11,iVar3,HVar9,(bool)(bVar1 & 1),-1.0);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,0xb03f7f556);
            HVar9 = lib::L2CValue::as_hash(aLStack112);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (*ppBVar11,HVar9,-1.0,1.0,0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SZEROSUIT_GENERATE_ARTICLE_WHIP);
            lib::L2CValue::L2CValue(aLStack128,0xb03f7f556);
            lib::L2CValue::L2CValue(aLStack144,true);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            HVar9 = lib::L2CValue::as_hash(aLStack128);
            bVar1 = lib::L2CValue::as_bool(aLStack144);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*ppBVar11,iVar3,HVar9,(bool)(bVar1 & 1),-1.0);
          }
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_S_FLAG_S2);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar3);
        }
        else {
          lib::L2CValue::L2CValue(aLStack176,CONTROL_PAD_BUTTON_SPECIAL);
          iVar3 = lib::L2CValue::as_integer(aLStack176);
          bVar1 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar11,iVar3);
          lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack112,false);
          uVar6 = lib::L2CValue::operator__(aLStack160,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((uVar6 & 1) == 0) goto LAB_71000105a4;
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_S_FLAG_S2_UNABLE);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar3);
        }
        lib::L2CValue::_L2CValue(aLStack112);
      }
LAB_7100010890:
      bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar11);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      if ((bVar2 & 1U) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar6 & 1) != 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
          uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar6 & 1) != 0) goto LAB_71000108b0;
        }
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar6 & 1) != 0) goto LAB_7100010ca8;
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar6 & 1) == 0) goto LAB_7100010dd0;
      }
      else {
LAB_71000108b0:
        lib::L2CValue::_L2CValue(aLStack128);
      }
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack128,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND_AIR);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        lVar8 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar11,iVar3);
        lib::L2CValue::L2CValue(aLStack112,lVar8);
        lib::L2CValue::_L2CValue(aLStack128);
        HVar9 = lib::L2CValue::as_hash(aLStack112);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar11,HVar9,-1.0,1.0,0.0,false,false);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SZEROSUIT_GENERATE_ARTICLE_WHIP);
        lib::L2CValue::L2CValue(aLStack144,true);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        HVar9 = lib::L2CValue::as_hash(aLStack112);
        bVar1 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::ArticleModule__change_motion_impl
                  (*ppBVar11,iVar3,HVar9,(bool)(bVar1 & 1),-1.0);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack128,GROUND_CORRECT_KIND_AIR);
        GVar5 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::GroundModule__correct_impl(*ppBVar11,GVar5);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_TYPE_AIR_STOP);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar11,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        lVar8 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar11,iVar3);
        lib::L2CValue::L2CValue(aLStack112,lVar8);
        lib::L2CValue::_L2CValue(aLStack128);
        HVar9 = lib::L2CValue::as_hash(aLStack112);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar11,HVar9,-1.0,1.0,0.0,false,false);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SZEROSUIT_GENERATE_ARTICLE_WHIP);
        lib::L2CValue::L2CValue(aLStack144,true);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        HVar9 = lib::L2CValue::as_hash(aLStack112);
        bVar1 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::ArticleModule__change_motion_impl
                  (*ppBVar11,iVar3,HVar9,(bool)(bVar1 & 1),-1.0);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack128,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
        GVar5 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::GroundModule__correct_impl(*ppBVar11,GVar5);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar11,iVar3);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        fVar12 = (float)app::sv_fighter_util::get_default_fighter_param_ground_brake
                                  (this->luaStateAgent);
        lib::L2CValue::L2CValue(aLStack128,fVar12);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        fVar12 = (float)app::sv_kinetic_energy::get_speed_length(this->luaStateAgent);
        lib::L2CValue::L2CValue(aLStack144,fVar12);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        fVar12 = (float)app::sv_fighter_util::get_default_fighter_param_walk_speed_max
                                  (this->luaStateAgent);
        lib::L2CValue::L2CValue(aLStack160,fVar12);
        uVar6 = lib::L2CValue::operator_(aLStack160,aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack192,0x6e5ec7051);
          lib::L2CValue::L2CValue(aLStack208,0x19da57e9ef);
          uVar6 = lib::L2CValue::as_integer(aLStack192);
          uVar10 = lib::L2CValue::as_integer(aLStack208);
          fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar6,uVar10);
          lib::L2CValue::L2CValue(aLStack176,fVar12);
          lib::L2CValue::operator_(aLStack128,aLStack176);
          lib::L2CValue::operator_(aLStack128,aLStack160);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack192);
        }
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CValue::L2CValue(aLStack176,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
        app::sv_kinetic_energy::set_brake(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        fVar12 = (float)app::sv_fighter_util::get_default_fighter_param_ground_speed_limit
                                  (this->luaStateAgent);
        lib::L2CValue::L2CValue(aLStack176,fVar12);
        lib::L2CValue::L2CValue(aLStack192,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
        app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
      }
      lib::L2CValue::_L2CValue(aLStack128);
      pLVar7 = aLStack112;
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar6 & 1) == 0) goto LAB_7100010218;
        lib::L2CValue::L2CValue(aLStack272,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack288,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xf0,(L2CValue)0xe0);
        lib::L2CValue::_L2CValue(aLStack288);
        pLVar7 = aLStack272;
      }
      else {
        lib::L2CValue::L2CValue(aLStack240,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack256,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x10,(L2CValue)0x0);
        lib::L2CValue::_L2CValue(aLStack256);
        pLVar7 = aLStack240;
      }
    }
LAB_7100010dcc:
    lib::L2CValue::_L2CValue(pLVar7);
  }
  else {
    lib::L2CValue::L2CValue(aLStack224,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x20);
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar6 = lib::L2CValue::operator__(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack224);
LAB_7100010ca8:
      pLVar7 = aLStack128;
      goto LAB_7100010dcc;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar6 = lib::L2CValue::operator__(aLStack160,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar6 & 1) != 0) goto LAB_71000100ec;
  }
LAB_7100010dd0:
  iVar3 = 0;
LAB_7100010dd8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

