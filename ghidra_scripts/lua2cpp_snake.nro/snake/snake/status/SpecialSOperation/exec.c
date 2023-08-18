
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSnake::status::SpecialSOperation_exec(L2CFighterSnake *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CAgent *this_00;
  L2CValue *pLVar6;
  float fVar7;
  float fVar8;
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
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SNAKE_STATUS_SPECIAL_S_OPERATION_WORK_FLOAT_PREV_X);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack128,fVar7);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_SNAKE_STATUS_SPECIAL_S_OPERATION_WORK_FLOAT_PREV_Y);
  iVar1 = lib::L2CValue::as_integer(aLStack160);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack144,fVar7);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x80,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  fVar7 = (float)app::lua_bind::ControlModule__get_stick_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,fVar7);
  fVar7 = (float)app::lua_bind::ControlModule__get_stick_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,fVar7);
  pLVar6 = aLStack192;
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x50,SUB81(pLVar6,0));
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
  lib::L2CValue::operator_(pLVar3,pLVar4);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_SNAKE_STATUS_SPECIAL_S_OPERATION_WORK_FLOAT_COMP_MUL);
  iVar1 = lib::L2CValue::as_integer(aLStack256);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack240,fVar7);
  lib::L2CValue::operator_(aLStack224,aLStack240);
  lib::L2CValue::operator_(pLVar2,aLStack208);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  lib::L2CValue::operator_(pLVar2,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack224);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar3,pLVar4);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_SNAKE_STATUS_SPECIAL_S_OPERATION_WORK_FLOAT_COMP_MUL);
  iVar1 = lib::L2CValue::as_integer(aLStack256);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack240,fVar7);
  lib::L2CValue::operator_(aLStack224,aLStack240);
  lib::L2CValue::operator_(pLVar2,aLStack208);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar2,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack224);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  fVar7 = (float)lib::L2CValue::as_number(pLVar2);
  fVar8 = (float)lib::L2CValue::as_number(pLVar3);
  fVar7 = (float)app::sv_math::vec2_length(fVar7,fVar8);
  lib::L2CValue::L2CValue(aLStack208,fVar7);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  uVar5 = lib::L2CValue::operator_(aLStack96,aLStack208);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::operator_(aLStack208,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  fVar7 = (float)app::lua_bind::MotionModule__prev_weight_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack224,fVar7);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  lib::L2CValue::operator_(aLStack96,aLStack208);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::operator_(aLStack256,aLStack224);
  lib::L2CValue::_L2CValue(aLStack256);
  fVar7 = (float)lib::L2CValue::as_number(aLStack240);
  app::lua_bind::MotionModule__set_weight_rate_impl(this->moduleAccessor,fVar7);
  this_00 = (L2CAgent *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack288,fVar7);
  lib::L2CValue::operator_(pLVar2,aLStack288);
  pLVar2 = aLStack272;
  lib::L2CAgent::math_atan(this_00,pLVar2,pLVar6);
  lib::L2CAgent::math_deg((L2CAgent *)aLStack96,pLVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::L2CValue(aLStack96,360.0);
  uVar5 = lib::L2CValue::operator_(aLStack96,aLStack256);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0.0);
    uVar5 = lib::L2CValue::operator_(aLStack256,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) goto LAB_710001e2c8;
    lib::L2CValue::L2CValue(aLStack96,360.0);
    lib::L2CValue::operator_(aLStack256,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::operator_(aLStack256,aLStack272);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,360.0);
    lib::L2CValue::operator_(aLStack256,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::operator_(aLStack256,aLStack272);
  }
  lib::L2CValue::_L2CValue(aLStack272);
LAB_710001e2c8:
  fVar7 = (float)app::lua_bind::MotionModule__frame_2nd_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack272,fVar7);
  lib::L2CValue::operator_(aLStack256,aLStack272);
  fVar7 = (float)lib::L2CValue::as_number(aLStack96);
  app::lua_bind::MotionModule__set_rate_2nd_impl(this->moduleAccessor,fVar7);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack272);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SNAKE_STATUS_SPECIAL_S_OPERATION_WORK_FLOAT_PREV_X);
  fVar7 = (float)lib::L2CValue::as_number(pLVar6);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SNAKE_STATUS_SPECIAL_S_OPERATION_WORK_FLOAT_PREV_Y);
  fVar7 = (float)lib::L2CValue::as_number(pLVar6);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

