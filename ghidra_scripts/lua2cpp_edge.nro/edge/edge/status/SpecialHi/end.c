
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterEdge::status::SpecialHi_end(L2CFighterEdge *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  Hash40 HVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  float fVar9;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x181a00e737);
  lib::L2CValue::L2CValue(aLStack96,true);
  lib::L2CValue::L2CValue(aLStack112,true);
  HVar6 = lib::L2CValue::as_hash(aLStack80);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  bVar2 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::EffectModule__kill_kind_impl
            (this->moduleAccessor,HVar6,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_EFFECT_HANDLE_NULL);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_EDGE_STATUS_SPECIAL_HI_INT_DIRECTION_EFFECT_HANDLE);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  iVar5 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_STATUS_SPECIAL_HI_FLAG_DIRECTION_EFFECT_VISIBLE);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_STATUS_SPECIAL_HI_FLOAT_DECIDE_ROT_DEGREE);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_STATUS_SPECIAL_HI_FLOAT_RUSH_DEGREE);
  fVar9 = (float)lib::L2CValue::as_number(aLStack112);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_STATUS_KIND_SPECIAL_HI_RUSH);
  uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar8 & 1) == 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_STATUS_KIND_SPECIAL_HI_CHARGED_RUSH);
    bVar1 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  else {
    bVar1 = 1;
  }
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack112);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar3 & 1U) != 0) {
    FUN_7100014650(this);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

