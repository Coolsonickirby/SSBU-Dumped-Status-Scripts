
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::EflameSpecialNHold_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float fVar8;
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
  
  lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack112,0xeff621924);
  uVar5 = lib::L2CValue::as_integer(aLStack96);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack208,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack224,false);
  lib::L2CValue::L2CValue(aLStack128,CONTROL_PAD_BUTTON_SPECIAL);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::operator_(aLStack224,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  uVar5 = lib::L2CValue::operator__(aLStack208,pLVar7);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::operator_(aLStack224,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack224);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack240,0xe06860a20);
    lib::L2CValue::L2CValue(aLStack256,0x1244d4ffef);
    lib::L2CValue::L2CValue(aLStack272,true);
    lib::L2CValue::L2CValue(aLStack304,aLStack240);
    lib::L2CValue::L2CValue(aLStack320,aLStack256);
    lib::L2CValue::L2CValue(aLStack336,aLStack272);
    lua2cpp::L2CFighterCommon::sub_change_motion_by_situation_kirby_copy
              (this,(L2CValue)0xd0,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue(aLStack368,true);
    lua2cpp::L2CFighterCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
    lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting(this,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue
              (aLStack144,_FIGHTER_EFLAME_STATUS_SPECIAL_N_WORK_FLAG_SPEED_CHANGE_HOLD_END_CHANGED);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_EFLAME_STATUS_SPECIAL_N_WORK_FLAG_SPEED_CHANGE_HOLD_END_REQUEST
                );
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,true);
      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar5 & 1) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
        uVar5 = lib::L2CValue::operator__(pLVar7,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
          lib::L2CValue::L2CValue(aLStack144,0x144861971e);
          uVar5 = lib::L2CValue::as_integer(aLStack96);
          uVar6 = lib::L2CValue::as_integer(aLStack144);
          fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar5,uVar6);
          lib::L2CValue::L2CValue(aLStack128,fVar8);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
          lib::L2CValue::L2CValue(aLStack160,0x18e7576262);
          uVar5 = lib::L2CValue::as_integer(aLStack96);
          uVar6 = lib::L2CValue::as_integer(aLStack160);
          fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar5,uVar6);
          lib::L2CValue::L2CValue(aLStack144,fVar8);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack176,0xba18057d9);
          lib::L2CValue::L2CValue(aLStack192,0);
          uVar5 = lib::L2CValue::as_integer(aLStack176);
          uVar6 = lib::L2CValue::as_integer(aLStack192);
          fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar5,uVar6);
          lib::L2CValue::L2CValue(aLStack96,fVar8);
          lib::L2CValue::operator_(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::L2CValue(aLStack96,0.0);
          uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::operator_(aLStack128,aLStack160);
            lib::L2CValue::operator_(aLStack160,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
          }
          lib::L2CValue::L2CValue(aLStack96,0x12ec5626fe);
          lib::L2CValue::L2CValue(aLStack192,0);
          uVar5 = lib::L2CValue::as_integer(aLStack96);
          uVar6 = lib::L2CValue::as_integer(aLStack192);
          fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar5,uVar6);
          lib::L2CValue::L2CValue(aLStack176,fVar8);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,0.0);
          uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::operator_(aLStack144,aLStack176);
            lib::L2CValue::operator_(aLStack176,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
          }
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
          app::sv_kinetic_energy::set_accel(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
          app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
          app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue
                    (aLStack96,
                     _FIGHTER_EFLAME_STATUS_SPECIAL_N_WORK_FLAG_SPEED_CHANGE_HOLD_END_CHANGED);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue
                    (aLStack96,
                     _FIGHTER_EFLAME_STATUS_SPECIAL_N_WORK_FLAG_SPEED_CHANGE_HOLD_END_REQUEST);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
        }
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    pLVar7 = aLStack240;
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack128,0xf311b5a2b);
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack144,0xf89a73d4e);
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
    uVar5 = lib::L2CValue::operator__(aLStack128,pLVar7);
    if ((uVar5 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
      uVar5 = lib::L2CValue::operator__(aLStack112,pLVar7);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,1);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_EFLAME_STATUS_SPECIAL_N_WORK_INT_ROTATE_NUM);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        iVar4 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,2);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_EFLAME_STATUS_SPECIAL_N_WORK_INT_ROTATE_NUM);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        iVar4 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,3);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_EFLAME_STATUS_SPECIAL_N_WORK_INT_ROTATE_NUM);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
    }
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
    lib::L2CValue::operator_(pLVar7,aLStack208);
    lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack176,0x180cb6d71f);
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    uVar6 = lib::L2CValue::as_integer(aLStack176);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack160,fVar8);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack192,1.0);
    lib::L2CValue::L2CValue(aLStack240,aLStack160);
    lib::L2CValue::L2CValue(aLStack256,aLStack144);
    lua2cpp::L2CFighterBase::lerp(this,(L2CValue)0x40,(L2CValue)0x10,(L2CValue)0x0);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator_(aLStack176,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_EFLAME_STATUS_SPECIAL_N_WORK_FLOAT_ATTACK_MUL);
    fVar8 = (float)lib::L2CValue::as_number(aLStack272);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_KIND_EFLAME_SPECIAL_N_ATTACK);
    lib::L2CValue::L2CValue(aLStack272,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0xf0);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    pLVar7 = aLStack112;
  }
  lib::L2CValue::_L2CValue(pLVar7);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  return;
}

