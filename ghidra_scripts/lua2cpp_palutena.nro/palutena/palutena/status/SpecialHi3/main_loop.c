
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPalutena::status::SpecialHi3_main_loop(L2CFighterPalutena *this,L2CValue *return_value)

{
  L2CValue *this_00;
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  FighterEntryID FVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  void *pvVar9;
  FighterInformation *pFVar10;
  L2CValue *this_01;
  float fVar11;
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
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
  L2CValue aLStack96 [16];
  
  this_01 = aLStack416;
  iVar4 = app::lua_bind::ControlModule__get_attack_air_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,iVar4);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_COMMAND_ATTACK_AIR_KIND_NONE);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,true);
    bVar2 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::FighterControlModuleImpl__update_attack_air_kind_impl
              (this->moduleAccessor,(bool)(bVar2 & 1));
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar3 & 1U) != 0) {
    iVar4 = 1;
    goto LAB_7100015b58;
  }
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
LAB_7100014e40:
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PALUTENA_STATUS_SPECIAL_HI_WORK_INT_START_SITUATION)
    ;
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack112,iVar4);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar6 & 1) == 0) {
      bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar3 & 1U) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) == 0) goto LAB_7100015068;
        lib::L2CValue::L2CValue(aLStack384,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
        lib::L2CValue::L2CValue(aLStack400,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
        lib::L2CValue::_L2CValue(aLStack400);
        this_01 = aLStack384;
      }
      else {
        lib::L2CValue::L2CValue(aLStack352,FIGHTER_STATUS_KIND_FALL_SPECIAL);
        lib::L2CValue::L2CValue(aLStack368,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
        lib::L2CValue::_L2CValue(aLStack368);
        this_01 = aLStack352;
      }
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar3 & 1U) == 0) {
LAB_7100015068:
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PALUTENA_STATUS_SPECIAL_HI_DIVE);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((bVar3 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PALUTENA_STATUS_SPECIAL_HI_DIVE_DONE);
            iVar4 = lib::L2CValue::as_integer(aLStack128);
            bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
            lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
            lib::L2CValue::L2CValue(aLStack96,false);
            uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack128);
            if ((uVar6 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack96,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
              iVar4 = lib::L2CValue::as_integer(aLStack96);
              fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                                        (this->moduleAccessor,iVar4);
              lib::L2CValue::L2CValue(aLStack112,fVar11);
              lib::L2CValue::_L2CValue(aLStack96);
              pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1b);
              lib::L2CValue::L2CValue(aLStack144,0x6e5ec7051);
              lib::L2CValue::L2CValue(aLStack160,0xf3e7d6011);
              uVar6 = lib::L2CValue::as_integer(aLStack144);
              uVar8 = lib::L2CValue::as_integer(aLStack160);
              fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                        (this->moduleAccessor,uVar6,uVar8);
              lib::L2CValue::L2CValue(aLStack128,fVar11);
              uVar6 = lib::L2CValue::operator__(pLVar7,aLStack128);
              if ((uVar6 & 1) == 0) {
                lib::L2CValue::_L2CValue(aLStack128);
                lib::L2CValue::_L2CValue(aLStack160);
                lVar1 = -0x80;
LAB_710001551c:
                lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
              }
              else {
                pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1d);
                lib::L2CValue::L2CValue(aLStack192,0x6e5ec7051);
                lib::L2CValue::L2CValue(aLStack208,0x168f5191f3);
                uVar6 = lib::L2CValue::as_integer(aLStack192);
                uVar8 = lib::L2CValue::as_integer(aLStack208);
                iVar4 = app::lua_bind::WorkModule__get_param_int_impl
                                  (this->moduleAccessor,uVar6,uVar8);
                lib::L2CValue::L2CValue(aLStack176,iVar4);
                uVar6 = lib::L2CValue::operator_(pLVar7,aLStack176);
                if ((uVar6 & 1) == 0) {
                  uVar6 = 0;
                }
                else {
                  lib::L2CValue::L2CValue(aLStack96,0.0);
                  uVar6 = lib::L2CValue::operator_(aLStack112,aLStack96);
                  uVar6 = uVar6 & 0xffffffff;
                  lib::L2CValue::_L2CValue(aLStack96);
                }
                lib::L2CValue::_L2CValue(aLStack176);
                lib::L2CValue::_L2CValue(aLStack208);
                lib::L2CValue::_L2CValue(aLStack192);
                lib::L2CValue::_L2CValue(aLStack128);
                lib::L2CValue::_L2CValue(aLStack160);
                lib::L2CValue::_L2CValue(aLStack144);
                if ((uVar6 & 1) != 0) {
                  lib::L2CValue::L2CValue(aLStack144,0xcca113a7f);
                  lib::L2CValue::L2CValue(aLStack160,0);
                  uVar6 = lib::L2CValue::as_integer(aLStack144);
                  uVar8 = lib::L2CValue::as_integer(aLStack160);
                  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                            (this->moduleAccessor,uVar6,uVar8);
                  lib::L2CValue::L2CValue(aLStack128,fVar11);
                  lib::L2CValue::operator_(aLStack128);
                  lib::L2CValue::_L2CValue(aLStack128);
                  lib::L2CValue::_L2CValue(aLStack160);
                  lib::L2CValue::_L2CValue(aLStack144);
                  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack112);
                  if ((uVar6 & 1) != 0) {
                    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_INT_ENTRY_ID);
                    iVar4 = lib::L2CValue::as_integer(aLStack144);
                    iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
                    lib::L2CValue::L2CValue(aLStack128,iVar4);
                    lib::L2CValue::_L2CValue(aLStack144);
                    FVar5 = lib::L2CValue::as_integer(aLStack128);
                    pvVar9 = (void *)app::lua_bind::FighterManager__get_fighter_information_impl
                                               (FIGHTER_LINK_NO_CONSTRAINT,FVar5);
                    lib::L2CValue::L2CValue(aLStack144,pvVar9);
                    pFVar10 = (FighterInformation *)lib::L2CValue::as_pointer(aLStack144);
                    fVar11 = (float)app::lua_bind::FighterInformation__gravity_impl(pFVar10);
                    lib::L2CValue::L2CValue(aLStack160,fVar11);
                    fVar11 = (float)app::lua_bind::BattleObjectWorld__gravity_speed_coefficient_impl
                                              (FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_ESCAPE_AIR);
                    lib::L2CValue::L2CValue(aLStack176,fVar11);
                    lib::L2CValue::operator_(aLStack96,aLStack160);
                    lib::L2CValue::operator_(aLStack208,aLStack176);
                    lib::L2CValue::operator_(aLStack96,aLStack192);
                    lib::L2CValue::_L2CValue(aLStack192);
                    lib::L2CValue::_L2CValue(aLStack208);
                    lib::L2CValue::L2CValue(aLStack192,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
                    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
                    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
                    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
                    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
                    lib::L2CValue::_L2CValue(aLStack192);
                    lib::L2CValue::L2CValue(aLStack192,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
                    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
                    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
                    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
                    app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
                    lib::L2CValue::_L2CValue(aLStack192);
                    lib::L2CValue::L2CValue(aLStack192,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
                    lib::L2CValue::L2CValue(aLStack208,0.0);
                    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
                    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
                    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
                    app::sv_kinetic_energy::set_accel(this->luaStateAgent);
                    lib::L2CValue::_L2CValue(aLStack208);
                    lib::L2CValue::_L2CValue(aLStack192);
                    lib::L2CValue::L2CValue
                              (aLStack192,_FIGHTER_PALUTENA_STATUS_SPECIAL_HI_DIVE_DONE);
                    iVar4 = lib::L2CValue::as_integer(aLStack192);
                    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
                    lib::L2CValue::_L2CValue(aLStack192);
                    lua2cpp::L2CFighterCommon::check_mach_stamp(this);
                    lib::L2CValue::_L2CValue(aLStack176);
                    lib::L2CValue::_L2CValue(aLStack160);
                    lib::L2CValue::_L2CValue(aLStack144);
                    lib::L2CValue::_L2CValue(aLStack128);
                  }
                  lVar1 = -0x50;
                  goto LAB_710001551c;
                }
              }
              lib::L2CValue::_L2CValue(aLStack112);
            }
          }
          this_00 = &this->globalTable;
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,8);
          lib::L2CValue::L2CValue(aLStack96,false);
          uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar6 & 1) == 0) {
LAB_7100015af4:
            lib::L2CValue::L2CValue(aLStack112,0);
            lib::L2CValue::L2CValue(aLStack96,0);
            uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar6 & 1) == 0) goto LAB_7100015b3c;
            iVar4 = 0;
          }
          else {
            pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
            lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
            uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((uVar6 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PALUTENA_STATUS_SPECIAL_HI_CONTROL_ON);
              iVar4 = lib::L2CValue::as_integer(aLStack112);
              bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
              lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
              bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack112);
              if ((bVar3 & 1U) != 0) {
                lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
                lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
                lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
                fVar11 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
                lib::L2CValue::L2CValue(aLStack112,fVar11);
                lib::L2CValue::_L2CValue(aLStack96);
                lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
                lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
                lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
                fVar11 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
                lib::L2CValue::L2CValue(aLStack128,fVar11);
                lib::L2CValue::_L2CValue(aLStack96);
                lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
                lib::L2CValue::L2CValue(aLStack160,0x1c6a68f571);
                uVar6 = lib::L2CValue::as_integer(aLStack96);
                uVar8 = lib::L2CValue::as_integer(aLStack160);
                fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                          (this->moduleAccessor,uVar6,uVar8);
                lib::L2CValue::L2CValue(aLStack144,fVar11);
                lib::L2CValue::_L2CValue(aLStack160);
                lib::L2CValue::_L2CValue(aLStack96);
                lib::L2CValue::L2CValue(aLStack96,0x1220fc2660);
                lib::L2CValue::L2CValue(aLStack176,0);
                uVar6 = lib::L2CValue::as_integer(aLStack96);
                uVar8 = lib::L2CValue::as_integer(aLStack176);
                fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                          (this->moduleAccessor,uVar6,uVar8);
                lib::L2CValue::L2CValue(aLStack160,fVar11);
                lib::L2CValue::_L2CValue(aLStack176);
                lib::L2CValue::_L2CValue(aLStack96);
                lib::L2CValue::operator_(aLStack160,aLStack144);
                lib::L2CValue::L2CValue(aLStack192,false);
                pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
                lib::L2CValue::L2CValue(aLStack96,0.0);
                uVar6 = lib::L2CValue::operator_(aLStack96,pLVar7);
                lib::L2CValue::_L2CValue(aLStack96);
                if (((uVar6 & 1) == 0) ||
                   (uVar6 = lib::L2CValue::operator_(aLStack112,aLStack176), (uVar6 & 1) == 0)) {
                  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
                  lib::L2CValue::L2CValue(aLStack96,0.0);
                  uVar6 = lib::L2CValue::operator_(pLVar7,aLStack96);
                  lib::L2CValue::_L2CValue(aLStack96);
                  if ((uVar6 & 1) != 0) {
                    lib::L2CValue::operator_(aLStack176);
                    uVar6 = lib::L2CValue::operator_(aLStack96,aLStack112);
                    lib::L2CValue::_L2CValue(aLStack96);
                    if ((uVar6 & 1) != 0) {
                      lib::L2CValue::L2CValue(aLStack96,true);
                      lib::L2CValue::operator_(aLStack192,aLStack96);
                      goto LAB_7100015814;
                    }
                  }
                }
                else {
                  lib::L2CValue::L2CValue(aLStack96,true);
                  lib::L2CValue::operator_(aLStack192,aLStack96);
LAB_7100015814:
                  lib::L2CValue::_L2CValue(aLStack96);
                }
                bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack192);
                if ((bVar3 & 1U) != 0) {
                  lib::L2CValue::L2CValue(aLStack96,0xf71f4d4f8);
                  lib::L2CValue::L2CValue(aLStack224,0);
                  uVar6 = lib::L2CValue::as_integer(aLStack96);
                  uVar8 = lib::L2CValue::as_integer(aLStack224);
                  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                            (this->moduleAccessor,uVar6,uVar8);
                  lib::L2CValue::L2CValue(aLStack208,fVar11);
                  lib::L2CValue::_L2CValue(aLStack224);
                  lib::L2CValue::_L2CValue(aLStack96);
                  lib::L2CValue::L2CValue(aLStack96,0xf25ec86be);
                  lib::L2CValue::L2CValue(aLStack240,0);
                  uVar6 = lib::L2CValue::as_integer(aLStack96);
                  uVar8 = lib::L2CValue::as_integer(aLStack240);
                  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                            (this->moduleAccessor,uVar6,uVar8);
                  lib::L2CValue::L2CValue(aLStack224,fVar11);
                  lib::L2CValue::_L2CValue(aLStack240);
                  lib::L2CValue::_L2CValue(aLStack96);
                  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
                  lib::L2CValue::operator_(pLVar7,aLStack208);
                  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
                  lib::L2CValue::L2CValue(aLStack96,0.0);
                  uVar6 = lib::L2CValue::operator_(aLStack96,pLVar7);
                  lib::L2CValue::_L2CValue(aLStack96);
                  if ((uVar6 & 1) == 0) {
                    lib::L2CValue::operator_(aLStack240,aLStack224);
                    lib::L2CValue::operator_(aLStack240,aLStack96);
                  }
                  else {
                    lib::L2CValue::operator_(aLStack240,aLStack224);
                    lib::L2CValue::operator_(aLStack240,aLStack96);
                  }
                  lib::L2CValue::_L2CValue(aLStack96);
                  lib::L2CValue::operator_(aLStack112,aLStack240);
                  lib::L2CValue::operator_(aLStack112,aLStack96);
                  lib::L2CValue::_L2CValue(aLStack96);
                  lib::L2CValue::L2CValue(aLStack96,0.0);
                  uVar6 = lib::L2CValue::operator_(aLStack96,aLStack240);
                  lib::L2CValue::_L2CValue(aLStack96);
                  if ((uVar6 & 1) == 0) {
                    lib::L2CValue::operator_(aLStack176);
                    uVar6 = lib::L2CValue::operator_(aLStack112,aLStack96);
                    lib::L2CValue::_L2CValue(aLStack96);
                    if ((uVar6 & 1) != 0) {
                      lib::L2CValue::operator_(aLStack176);
                      lib::L2CValue::operator_(aLStack112,aLStack96);
                      lib::L2CValue::_L2CValue(aLStack96);
                    }
                  }
                  else {
                    uVar6 = lib::L2CValue::operator_(aLStack176,aLStack112);
                    if ((uVar6 & 1) != 0) {
                      lib::L2CValue::operator_(aLStack112,aLStack176);
                    }
                  }
                  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
                  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
                  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
                  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
                  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
                  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
                  lib::L2CValue::_L2CValue(aLStack96);
                  lib::L2CValue::_L2CValue(aLStack240);
                  lib::L2CValue::_L2CValue(aLStack224);
                  lib::L2CValue::_L2CValue(aLStack208);
                }
                lib::L2CValue::_L2CValue(aLStack192);
                lib::L2CValue::_L2CValue(aLStack176);
                lib::L2CValue::_L2CValue(aLStack160);
                lib::L2CValue::_L2CValue(aLStack144);
                lib::L2CValue::_L2CValue(aLStack128);
                lib::L2CValue::_L2CValue(aLStack112);
              }
            }
            lib::L2CValue::L2CValue(aLStack256,0);
            lib::L2CValue::L2CValue(aLStack96,0);
            uVar6 = lib::L2CValue::operator__(aLStack256,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack256);
            if ((uVar6 & 1) != 0) goto LAB_7100015af4;
LAB_7100015b3c:
            iVar4 = 1;
          }
          lib::L2CValue::L2CValue(aLStack416,iVar4);
        }
        else {
          lib::L2CValue::L2CValue(aLStack320,_FIGHTER_STATUS_KIND_WAIT);
          lib::L2CValue::L2CValue(aLStack336,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
          lib::L2CValue::_L2CValue(aLStack336);
          this_01 = aLStack320;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack288,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack304,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0xd0);
        lib::L2CValue::_L2CValue(aLStack304);
        this_01 = aLStack288;
      }
    }
LAB_7100015b4c:
    lib::L2CValue::_L2CValue(this_01);
  }
  else {
    lib::L2CValue::L2CValue(aLStack272,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0xf0);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack272);
      this_01 = aLStack112;
      goto LAB_7100015b4c;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator__(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) goto LAB_7100014e40;
  }
  iVar4 = 0;
LAB_7100015b58:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar4);
  return;
}

