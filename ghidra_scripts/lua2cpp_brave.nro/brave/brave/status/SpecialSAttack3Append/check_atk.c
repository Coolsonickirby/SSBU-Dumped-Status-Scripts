
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialSAttack3Append_check_atk
          (L2CFighterBrave *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  ulong uVar2;
  L2CValue *in_x1;
  L2CValue *in_x2;
  float fVar3;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack160,in_x1);
  lib::L2CValue::L2CValue(aLStack176,in_x2);
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_S_ATTACK3_APPEND);
  uVar2 = lib::L2CValue::operator__(pLVar1,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,aLStack160);
    lib::L2CValue::L2CValue(aLStack80,aLStack176);
    fVar3 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,fVar3);
    FUN_7100003730(this,aLStack80,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar1 = aLStack64;
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,aLStack160);
    lib::L2CValue::L2CValue(aLStack80,aLStack176);
    lib::L2CValue::L2CValue(aLStack96,1.0);
    FUN_7100003730(this,aLStack80,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack112,aLStack160);
    lib::L2CValue::L2CValue(aLStack128,aLStack176);
    lib::L2CValue::L2CValue(aLStack144,-1.0);
    FUN_7100003730(this,aLStack128,aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    pLVar1 = aLStack112;
  }
  lib::L2CValue::_L2CValue(pLVar1);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

