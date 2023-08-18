
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterYoshi::status::SpecialSTurn_main_loop(L2CFighterYoshi *this,L2CValue *return_value)

{
  byte bVar1;
  GroundCorrectKind GVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Hash40 HVar6;
  ulong uVar7;
  L2CValue *this_00;
  L2CAgent *this_01;
  float fVar8;
  undefined8 uVar9;
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
  
  lib::L2CValue::L2CValue(aLStack128,0);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack256,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack256,GROUND_CORRECT_KIND_AIR);
    GVar2 = lib::L2CValue::as_integer(aLStack256);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar2);
  }
  else {
    lib::L2CValue::L2CValue(aLStack256,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar2 = lib::L2CValue::as_integer(aLStack256);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar2);
    lib::L2CValue::_L2CValue(aLStack256);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x17);
    lib::L2CValue::L2CValue(aLStack256,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    if ((uVar5 & 1) == 0) goto LAB_71000212b4;
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_INT_CUSTOMIZE_SPECIAL_S_NO);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack256,iVar3);
    lib::L2CValue::operator_(aLStack128,aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack256,1);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack256,2);
      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack256);
      lib::L2CValue::_L2CValue(aLStack256);
      if ((uVar5 & 1) == 0) goto LAB_71000212b4;
      lib::L2CValue::L2CValue(aLStack256,0x172ace445b);
      HVar6 = lib::L2CValue::as_hash(aLStack256);
      iVar3 = app::lua_bind::SoundModule__play_se_impl
                        (this->moduleAccessor,HVar6,true,false,false,false,0);
      lib::L2CValue::L2CValue(aLStack144,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack256,0x1789caf848);
      HVar6 = lib::L2CValue::as_hash(aLStack256);
      iVar3 = app::lua_bind::SoundModule__play_se_impl
                        (this->moduleAccessor,HVar6,true,false,false,false,0);
      lib::L2CValue::L2CValue(aLStack144,iVar3);
    }
    lib::L2CValue::_L2CValue(aLStack144);
  }
  lib::L2CValue::_L2CValue(aLStack256);
LAB_71000212b4:
  lib::L2CValue::L2CValue(aLStack256,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack96,0xfbb726246);
  uVar5 = lib::L2CValue::as_integer(aLStack256);
  uVar7 = lib::L2CValue::as_integer(aLStack96);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar7);
  lib::L2CValue::L2CValue(aLStack160,fVar8);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
  fVar8 = (float)app::sv_kinetic_energy::get_limit_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack176,fVar8);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x30,(L2CValue)0x20);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
  uVar9 = app::lua_bind::KineticModule__get_sum_speed_impl(this->moduleAccessor,-1);
  lib::L2CValue::L2CValue(aLStack256,(float)uVar9);
  lib::L2CValue::L2CValue(aLStack240,(float)((ulong)uVar9 >> 0x20));
  lib::L2CValue::operator_(pLVar4,aLStack256);
  lib::L2CValue::operator_(this_00,aLStack240);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  pLVar4 = (L2CValue *)0x18cdc1683;
  this_01 = (L2CAgent *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
  lib::L2CAgent::math_abs(this_01,pLVar4);
  lib::L2CValue::operator_(aLStack256,aLStack176);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack304,1.0);
  lib::L2CValue::L2CValue(aLStack320,aLStack160);
  lib::L2CValue::L2CValue(aLStack336,aLStack272);
  lua2cpp::L2CFighterBase::lerp(this,(L2CValue)0xd0,(L2CValue)0xc0,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::L2CValue(aLStack256,0xfa7982c0a);
  HVar6 = lib::L2CValue::as_hash(aLStack256);
  fVar8 = (float)lib::L2CValue::as_number(aLStack288);
  app::lua_bind::ShakeModule__set_scale_kind_impl(this->moduleAccessor,HVar6,fVar8);
  lib::L2CValue::_L2CValue(aLStack256);
  FUN_71000217c0(this);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_INT_NEXT_STATUS);
  iVar3 = lib::L2CValue::as_integer(aLStack256);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack256,_STATUS_KIND_NONE);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,false);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    bVar1 = app::lua_bind::StatusModule__change_status_request_impl
                      (this->moduleAccessor,iVar3,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

