
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponSzerosuitReticle::status::Attack_main_loop
          (L2CWeaponSzerosuitReticle *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  Hash40 HVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_SZEROSUIT_RETICLE_STATUS_WORK_FLAG_EFFECT_CHANGED);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
  uVar6 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    lib::L2CValue::L2CValue(aLStack96,0xd68857cec);
    lib::L2CValue::L2CValue(aLStack112,0x1b2652d686);
    uVar6 = lib::L2CValue::as_integer(aLStack96);
    uVar8 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar8);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar3);
    uVar6 = lib::L2CValue::operator__((L2CValue *)&local_50,pLVar7);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,_WEAPON_SZEROSUIT_RETICLE_STATUS_WORK_INT_EFFECT_HANDLE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
      lib::L2CValue::L2CValue(aLStack112,true);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_50);
      bVar2 = lib::L2CValue::as_bool(aLStack112);
      app::lua_bind::EffectModule__kill_impl
                (this->moduleAccessor,uVar4,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,-1);
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_SZEROSUIT_RETICLE_STATUS_WORK_INT_EFFECT_HANDLE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_ANIMCMD_EFFECT);
      lib::L2CValue::L2CValue(aLStack112,0x18807c3a24);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      HVar9 = lib::L2CValue::as_hash(aLStack112);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                (this->moduleAccessor,iVar3,HVar9,-1);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      uVar4 = app::lua_bind::EffectModule__get_last_handle_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,uVar4);
      lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,_WEAPON_SZEROSUIT_RETICLE_STATUS_WORK_INT_EFFECT_HANDLE);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar5);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      uVar10 = lib::L2CValue::as_number(aLStack112);
      uVar11 = lib::L2CValue::as_number(aLStack128);
      uVar4 = lib::L2CValue::as_number(aLStack144);
      local_50 = CONCAT44(uVar11,uVar10);
      uStack72 = (ulong)uVar4;
      app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,_WEAPON_SZEROSUIT_RETICLE_STATUS_WORK_FLAG_EFFECT_CHANGED);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  FUN_710001a5f0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

