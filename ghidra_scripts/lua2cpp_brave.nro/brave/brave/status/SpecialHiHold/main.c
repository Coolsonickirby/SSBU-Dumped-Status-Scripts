
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialHiHold_main(L2CFighterBrave *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  L2CValue *this_00;
  ulong uVar4;
  Hash40 HVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0x135d96d82e);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    fVar7 = (float)lib::L2CValue::as_number(aLStack96);
    fVar8 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0xf560f55fa);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    fVar7 = (float)lib::L2CValue::as_number(aLStack96);
    fVar8 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack112,0xe3adad701);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  uVar3 = app::lua_bind::MotionModule__end_frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,uVar3);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  fVar7 = (float)lib::L2CValue::as_number(aLStack112);
  app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar7);
  lib::L2CValue::L2CValue(aLStack128,SpecialHiHold_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

