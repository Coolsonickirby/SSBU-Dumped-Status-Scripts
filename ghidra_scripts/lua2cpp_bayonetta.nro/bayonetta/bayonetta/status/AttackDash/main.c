
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::AttackDash_main(L2CFighterBayonetta *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack112,0x1cf653a14b);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BAYONETTA_STATUS_ATTACK_DASH_WORK_INT_REDUCTION_LEFT);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack80,1.0);
  lib::L2CValue::L2CValue
            (aLStack96,_FIGHTER_BAYONETTA_STATUS_ATTACK_DASH_WORK_FLOAT_SPEED_COEFFICIENT);
  fVar5 = (float)lib::L2CValue::as_number(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lua2cpp::L2CFighterCommon::status_AttackDash(this);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

