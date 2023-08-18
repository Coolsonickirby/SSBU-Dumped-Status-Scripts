
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::SpecialHi_main_loop(L2CFighterDemon *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  L2CAgent *this_01;
  ulong uVar7;
  L2CValue *pLVar8;
  float fVar9;
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
  L2CValue aLStack80 [16];
  
  bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((bVar4 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DEMON_STATUS_SPECIAL_HI_FLAG_REVERSE_LR);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_SPECIAL_HI_FLAG_REVERSE_LR);
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::_L2CValue(aLStack80);
      pLVar8 = (L2CValue *)0x1a;
      this_01 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1a);
      lib::L2CAgent::math_abs(this_01,pLVar8);
      lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack128,0xaadffd255);
      uVar6 = lib::L2CValue::as_integer(aLStack112);
      uVar7 = lib::L2CValue::as_integer(aLStack128);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack96,fVar9);
      uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        bVar3 = app::lua_bind::PostureModule__set_stick_lr_impl(this->moduleAccessor,0.0);
        lib::L2CValue::L2CValue(aLStack256,(bool)(bVar3 & 1));
        lib::L2CValue::_L2CValue(aLStack256);
        app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
      }
    }
    lib::L2CValue::L2CValue(aLStack112,true);
    lua2cpp::L2CFighterCommon::sub_set_ground_correct_by_situation(this,(L2CValue)(cVar1 + -0x60));
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,0x1086bc4a93);
    lua2cpp::L2CFighterCommon::sub_set_special_start_inherit_common_kinetic_setting
              (this,(L2CValue)(cVar1 + -0x70));
    lib::L2CValue::_L2CValue(aLStack128);
    this_00 = &this->globalTable;
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar8,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack160,0x1608994192);
      uVar6 = lib::L2CValue::as_integer(aLStack80);
      uVar7 = lib::L2CValue::as_integer(aLStack160);
      iVar5 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack144,iVar5);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack80);
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      if ((bVar4 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::L2CValue(aLStack160,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
        lib::L2CValue::L2CValue(aLStack176,0.0);
        lib::L2CValue::L2CValue(aLStack192,0.0);
        lib::L2CValue::L2CValue(aLStack208,0.0);
        lib::L2CValue::L2CValue(aLStack224,0.0);
        lib::L2CValue::L2CValue(aLStack240,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
        app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack80);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
        lib::L2CValue::L2CValue(aLStack80,1);
        lib::L2CValue::operator_(pLVar8,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        uVar6 = lib::L2CValue::operator_(aLStack160,aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CValue::L2CValue(aLStack160,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
          app::sv_kinetic_energy::set_accel(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack80);
        }
      }
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
      lib::L2CValue::L2CValue(aLStack80,1);
      lib::L2CValue::operator_(pLVar8,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      uVar6 = lib::L2CValue::operator__(aLStack144,aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack192,0xc00c6e2df);
        uVar6 = lib::L2CValue::as_integer(aLStack176);
        uVar7 = lib::L2CValue::as_integer(aLStack192);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack160,fVar9);
        lib::L2CValue::operator_(aLStack160);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::L2CValue(aLStack160,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
        app::sv_kinetic_energy::set_accel(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack80);
      }
      lib::L2CValue::_L2CValue(aLStack144);
    }
    lVar2 = -0x50;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_SPECIAL_HI_RISE);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50))
    ;
    lib::L2CValue::_L2CValue(aLStack96);
    lVar2 = -0x40;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

