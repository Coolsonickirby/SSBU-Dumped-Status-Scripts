
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialLw_main_loop(L2CFighterBuddy *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  BattleObjectModuleAccessor **ppBVar7;
  int iVar8;
  float fVar9;
  L2CValue aLStack520 [16];
  L2CValue aLStack504 [16];
  L2CValue aLStack488 [16];
  L2CValue aLStack472 [16];
  L2CValue aLStack456 [16];
  L2CValue aLStack440 [16];
  L2CValue aLStack424 [16];
  L2CValue aLStack408 [16];
  L2CValue aLStack392 [16];
  L2CValue aLStack376 [16];
  L2CValue aLStack360 [16];
  L2CValue aLStack344 [16];
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [16];
  L2CValue aLStack120 [24];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  if ((bVar1 & 1U) != 0) goto LAB_710001dcf0;
  ppBVar7 = &this->moduleAccessor;
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar7);
  lib::L2CValue::L2CValue(aLStack136,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack120,true);
  uVar4 = lib::L2CValue::operator__(aLStack136,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack136);
LAB_710001d160:
    bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar7);
    lib::L2CValue::L2CValue(aLStack120,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    if ((bVar1 & 1U) == 0) {
LAB_710001d290:
      lib::L2CValue::L2CValue(aLStack136,_FIGHTER_BUDDY_STATUS_SPECIAL_LW_FLAG_GENERATE);
      iVar3 = lib::L2CValue::as_integer(aLStack136);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
      lib::L2CValue::L2CValue(aLStack120,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack120);
      lib::L2CValue::_L2CValue(aLStack120);
      lib::L2CValue::_L2CValue(aLStack136);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack136,_FIGHTER_BUDDY_STATUS_SPECIAL_LW_FLAG_GENERATE_SUCCESS);
        iVar3 = lib::L2CValue::as_integer(aLStack136);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
        lib::L2CValue::L2CValue(aLStack120,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack120);
        lib::L2CValue::_L2CValue(aLStack120);
        lib::L2CValue::_L2CValue(aLStack136);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack120,_FIGHTER_BUDDY_GENERATE_ARTICLE_BUDDYBOMB);
          iVar3 = lib::L2CValue::as_integer(aLStack120);
          app::lua_bind::ArticleModule__generate_article_enable_impl(*ppBVar7,iVar3,false,-1);
          lib::L2CValue::_L2CValue(aLStack120);
        }
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack120,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack120);
        lib::L2CValue::_L2CValue(aLStack120);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack136,_FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_SPECIAL_LW_HOP_COUNT);
          iVar3 = lib::L2CValue::as_integer(aLStack136);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar7,iVar3);
          lib::L2CValue::L2CValue(aLStack120,iVar3);
          lib::L2CValue::L2CValue(aLStack168,0x1018dfb2f4);
          lib::L2CValue::L2CValue(aLStack184,0x7d41c64d3);
          uVar4 = lib::L2CValue::as_integer(aLStack168);
          uVar6 = lib::L2CValue::as_integer(aLStack184);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar7,uVar4,uVar6);
          lib::L2CValue::L2CValue(aLStack152,iVar3);
          uVar4 = lib::L2CValue::operator_(aLStack120,aLStack152);
          lib::L2CValue::_L2CValue(aLStack152);
          lib::L2CValue::_L2CValue(aLStack184);
          lib::L2CValue::_L2CValue(aLStack168);
          lib::L2CValue::_L2CValue(aLStack120);
          lib::L2CValue::_L2CValue(aLStack136);
          if ((uVar4 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack152,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack152);
            fVar9 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
            lib::L2CValue::L2CValue(aLStack136,fVar9);
            lib::L2CValue::L2CValue(aLStack184,0x1018dfb2f4);
            lib::L2CValue::L2CValue(aLStack200,0x135387f81e);
            uVar4 = lib::L2CValue::as_integer(aLStack184);
            uVar6 = lib::L2CValue::as_integer(aLStack200);
            fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
            lib::L2CValue::L2CValue(aLStack168,fVar9);
            lib::L2CValue::operator_(aLStack136,aLStack168);
            lib::L2CValue::_L2CValue(aLStack168);
            lib::L2CValue::_L2CValue(aLStack200);
            lib::L2CValue::_L2CValue(aLStack184);
            lib::L2CValue::_L2CValue(aLStack136);
            lib::L2CValue::_L2CValue(aLStack152);
            lib::L2CValue::L2CValue(aLStack136,1.0);
            lib::L2CValue::L2CValue
                      (aLStack168,_FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_SPECIAL_LW_HOP_COUNT);
            iVar3 = lib::L2CValue::as_integer(aLStack168);
            iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar7,iVar3);
            lib::L2CValue::L2CValue(aLStack152,iVar3);
            lib::L2CValue::_L2CValue(aLStack168);
            iVar3 = lib::L2CValue::as_integer(aLStack152);
            if (0 < iVar3) {
              iVar8 = 0;
              do {
                lib::L2CValue::L2CValue(aLStack200,0x1018dfb2f4);
                lib::L2CValue::L2CValue(aLStack216,0x17bc740012);
                uVar4 = lib::L2CValue::as_integer(aLStack200);
                uVar6 = lib::L2CValue::as_integer(aLStack216);
                fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6)
                ;
                lib::L2CValue::L2CValue(aLStack184,fVar9);
                lib::L2CValue::operator_(aLStack136,aLStack184);
                lib::L2CValue::operator_(aLStack136,aLStack168);
                lib::L2CValue::_L2CValue(aLStack168);
                lib::L2CValue::_L2CValue(aLStack184);
                lib::L2CValue::_L2CValue(aLStack216);
                lib::L2CValue::_L2CValue(aLStack200);
                iVar8 = iVar8 + 1;
              } while (iVar8 < iVar3);
            }
            lib::L2CValue::_L2CValue(aLStack152);
            lib::L2CValue::L2CValue(aLStack184,0x1018dfb2f4);
            lib::L2CValue::L2CValue(aLStack200,0x13079faa58);
            uVar4 = lib::L2CValue::as_integer(aLStack184);
            uVar6 = lib::L2CValue::as_integer(aLStack200);
            fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
            lib::L2CValue::L2CValue(aLStack168,fVar9);
            lib::L2CValue::operator_(aLStack168,aLStack136);
            lib::L2CValue::_L2CValue(aLStack168);
            lib::L2CValue::_L2CValue(aLStack200);
            lib::L2CValue::_L2CValue(aLStack184);
            lib::L2CValue::operator_(aLStack120,aLStack152);
            lib::L2CValue::operator_(aLStack120,aLStack168);
            lib::L2CValue::_L2CValue(aLStack168);
            lib::L2CValue::L2CValue(aLStack184,0x1018dfb2f4);
            lib::L2CValue::L2CValue(aLStack200,0x1367f3fb36);
            uVar4 = lib::L2CValue::as_integer(aLStack184);
            uVar6 = lib::L2CValue::as_integer(aLStack200);
            fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
            lib::L2CValue::L2CValue(aLStack168,fVar9);
            uVar4 = lib::L2CValue::operator_(aLStack168,aLStack120);
            lib::L2CValue::_L2CValue(aLStack168);
            lib::L2CValue::_L2CValue(aLStack200);
            lib::L2CValue::_L2CValue(aLStack184);
            if ((uVar4 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack184,0x1018dfb2f4);
              lib::L2CValue::L2CValue(aLStack200,0x1367f3fb36);
              uVar4 = lib::L2CValue::as_integer(aLStack184);
              uVar6 = lib::L2CValue::as_integer(aLStack200);
              fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
              lib::L2CValue::L2CValue(aLStack168,fVar9);
              lib::L2CValue::operator_(aLStack120,aLStack168);
              lib::L2CValue::_L2CValue(aLStack168);
              lib::L2CValue::_L2CValue(aLStack200);
              lib::L2CValue::_L2CValue(aLStack184);
            }
            lib::L2CValue::L2CValue(aLStack200,0x1018dfb2f4);
            lib::L2CValue::L2CValue(aLStack216,0x1367f3fb36);
            uVar4 = lib::L2CValue::as_integer(aLStack200);
            uVar6 = lib::L2CValue::as_integer(aLStack216);
            fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
            lib::L2CValue::L2CValue(aLStack184,fVar9);
            lib::L2CValue::operator_(aLStack184);
            uVar4 = lib::L2CValue::operator_(aLStack120,aLStack168);
            lib::L2CValue::_L2CValue(aLStack168);
            lib::L2CValue::_L2CValue(aLStack184);
            lib::L2CValue::_L2CValue(aLStack216);
            lib::L2CValue::_L2CValue(aLStack200);
            if ((uVar4 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack200,0x1018dfb2f4);
              lib::L2CValue::L2CValue(aLStack216,0x1367f3fb36);
              uVar4 = lib::L2CValue::as_integer(aLStack200);
              uVar6 = lib::L2CValue::as_integer(aLStack216);
              fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
              lib::L2CValue::L2CValue(aLStack184,fVar9);
              lib::L2CValue::operator_(aLStack184);
              lib::L2CValue::operator_(aLStack120,aLStack168);
              lib::L2CValue::_L2CValue(aLStack168);
              lib::L2CValue::_L2CValue(aLStack184);
              lib::L2CValue::_L2CValue(aLStack216);
              lib::L2CValue::_L2CValue(aLStack200);
            }
            lib::L2CValue::L2CValue(aLStack168,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack168);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack120);
            app::sv_kinetic_energy::set_speed(this->luaStateAgent);
            lib::L2CValue::_L2CValue(aLStack168);
            lib::L2CValue::L2CValue(aLStack168,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
            lib::L2CValue::L2CValue(aLStack200,0x1018dfb2f4);
            lib::L2CValue::L2CValue(aLStack216,0x1367f3fb36);
            uVar4 = lib::L2CValue::as_integer(aLStack200);
            uVar6 = lib::L2CValue::as_integer(aLStack216);
            fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
            lib::L2CValue::L2CValue(aLStack184,fVar9);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack168);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack184);
            app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
            lib::L2CValue::_L2CValue(aLStack184);
            lib::L2CValue::_L2CValue(aLStack216);
            lib::L2CValue::_L2CValue(aLStack200);
            lib::L2CValue::_L2CValue(aLStack168);
            lib::L2CValue::L2CValue(aLStack168,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
            lib::L2CValue::L2CValue(aLStack200,0x1018dfb2f4);
            lib::L2CValue::L2CValue(aLStack216,0x135a93d286);
            uVar4 = lib::L2CValue::as_integer(aLStack200);
            uVar6 = lib::L2CValue::as_integer(aLStack216);
            fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
            lib::L2CValue::L2CValue(aLStack184,fVar9);
            lib::L2CValue::L2CValue(aLStack232,-1.0);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack168);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack184);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack232);
            app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
            lib::L2CValue::_L2CValue(aLStack232);
            lib::L2CValue::_L2CValue(aLStack184);
            lib::L2CValue::_L2CValue(aLStack216);
            lib::L2CValue::_L2CValue(aLStack200);
            lib::L2CValue::_L2CValue(aLStack168);
            lib::L2CValue::_L2CValue(aLStack152);
            lib::L2CValue::_L2CValue(aLStack136);
            lib::L2CValue::_L2CValue(aLStack120);
          }
        }
        lib::L2CValue::L2CValue(aLStack120,_FIGHTER_BUDDY_STATUS_SPECIAL_LW_FLAG_GENERATE);
        iVar3 = lib::L2CValue::as_integer(aLStack120);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar7,iVar3);
        lib::L2CValue::_L2CValue(aLStack120);
        lib::L2CValue::L2CValue(aLStack120,_FIGHTER_BUDDY_STATUS_SPECIAL_LW_FLAG_GENERATE_DONE);
        iVar3 = lib::L2CValue::as_integer(aLStack120);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar7,iVar3);
        lib::L2CValue::_L2CValue(aLStack120);
        lib::L2CValue::L2CValue(aLStack120,_FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_SPECIAL_LW_HOP_COUNT)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack120);
        app::lua_bind::WorkModule__inc_int_impl(*ppBVar7,iVar3);
        lib::L2CValue::_L2CValue(aLStack120);
      }
      lib::L2CValue::L2CValue(aLStack136,_FIGHTER_BUDDY_STATUS_SPECIAL_LW_FLAG_GENERATE_SUCCESS);
      iVar3 = lib::L2CValue::as_integer(aLStack136);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
      lib::L2CValue::L2CValue(aLStack120,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack120);
      lib::L2CValue::_L2CValue(aLStack120);
      lib::L2CValue::_L2CValue(aLStack136);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack408,0xf0271344c);
        lib::L2CValue::L2CValue(aLStack424,0x1309e8b998);
        lib::L2CValue::L2CValue(aLStack440,true);
        lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
                  (this,(L2CValue)0x68,(L2CValue)0x58,(L2CValue)0x48);
        lib::L2CValue::_L2CValue(aLStack392);
        lib::L2CValue::_L2CValue(aLStack440);
        lib::L2CValue::_L2CValue(aLStack424);
        pLVar5 = aLStack408;
      }
      else {
        lib::L2CValue::L2CValue(aLStack344,0xab6928cf2);
        lib::L2CValue::L2CValue(aLStack360,0xe46c0e666);
        lib::L2CValue::L2CValue(aLStack376,true);
        lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
                  (this,(L2CValue)0xa8,(L2CValue)0x98,(L2CValue)0x88);
        lib::L2CValue::_L2CValue(aLStack328);
        lib::L2CValue::_L2CValue(aLStack376);
        lib::L2CValue::_L2CValue(aLStack360);
        pLVar5 = aLStack344;
      }
      lib::L2CValue::_L2CValue(pLVar5);
      lib::L2CValue::L2CValue(aLStack456,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      lib::L2CValue::L2CValue(aLStack472,_FIGHTER_KINETIC_TYPE_FALL);
      lua2cpp::L2CFighterCommon::sub_change_kinetic_type_by_situation
                (this,(L2CValue)0x38,(L2CValue)0x28);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack120);
      lib::L2CValue::_L2CValue(aLStack120);
      lib::L2CValue::_L2CValue(aLStack472);
      lib::L2CValue::_L2CValue(aLStack456);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack488,true);
        FUN_710001c7c0(this);
        lib::L2CValue::_L2CValue(aLStack488);
      }
      lib::L2CValue::L2CValue(aLStack520,true);
      lua2cpp::L2CFighterCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0xf8);
      lib::L2CValue::_L2CValue(aLStack504);
      pLVar5 = aLStack520;
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack120,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack120);
      lib::L2CValue::_L2CValue(aLStack120);
      if ((uVar4 & 1) == 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack120,SITUATION_KIND_AIR);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack120);
        lib::L2CValue::_L2CValue(aLStack120);
        if ((uVar4 & 1) == 0) goto LAB_710001d290;
        lib::L2CValue::L2CValue(aLStack296,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack312,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xd8,(L2CValue)0xc8);
        lib::L2CValue::_L2CValue(aLStack312);
        pLVar5 = aLStack296;
      }
      else {
        lib::L2CValue::L2CValue(aLStack264,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack280,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xf8,(L2CValue)0xe8);
        lib::L2CValue::_L2CValue(aLStack280);
        pLVar5 = aLStack264;
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack248,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x8);
    lib::L2CValue::L2CValue(aLStack120,false);
    uVar4 = lib::L2CValue::operator__(aLStack152,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    if ((uVar4 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack120,false);
      uVar4 = lib::L2CValue::operator__(aLStack168,aLStack120);
      lib::L2CValue::_L2CValue(aLStack120);
      lib::L2CValue::_L2CValue(aLStack168);
      lib::L2CValue::_L2CValue(aLStack152);
      lib::L2CValue::_L2CValue(aLStack248);
      lib::L2CValue::_L2CValue(aLStack136);
      if ((uVar4 & 1) == 0) goto LAB_710001dcf0;
      goto LAB_710001d160;
    }
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack248);
    pLVar5 = aLStack136;
  }
  lib::L2CValue::_L2CValue(pLVar5);
LAB_710001dcf0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

