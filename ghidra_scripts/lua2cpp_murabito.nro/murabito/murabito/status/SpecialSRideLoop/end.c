
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMurabito::status::SpecialSRideLoop_end(L2CFighterMurabito *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  app::lua_bind::LinkModule__remove_model_constraint_impl(this->moduleAccessor,true);
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_S_JUMP);
  uVar2 = lib::L2CValue::operator__(pLVar1,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar2 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_S_FALL);
    uVar2 = lib::L2CValue::operator__(pLVar1,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_CLAYROCKET_SHOOT_DAMAGE);
      FUN_7100023390(this,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_MURABITO_CLAYROCKET_SHOOT_GET_OFF);
  FUN_7100023390(this,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  FUN_71000234c0(this);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  uVar2 = lib::L2CValue::as_number(aLStack128);
  lVar4 = lib::L2CValue::as_number(aLStack144);
  uVar3 = lib::L2CValue::as_number(aLStack160);
  local_50 = uVar2 & 0xffffffff | lVar4 << 0x20;
  uStack72 = (ulong)uVar3;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

