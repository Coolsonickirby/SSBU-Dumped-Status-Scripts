
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPickelTable::status::Break_main(L2CWeaponPickelTable *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  Hash40 HVar4;
  Hash40 HVar5;
  int in_stack_ffffffffffffff54;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  undefined8 local_70;
  undefined8 uStack104;
  undefined8 uStack96;
  undefined8 uStack88;
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 uStack64;
  undefined8 uStack56;
  
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&uStack64);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,true);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&uStack64);
  app::lua_bind::HitModule__sleep_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,false);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&uStack64);
  app::lua_bind::JostleModule__set_status_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,false);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&uStack64);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::L2CValue(aLStack128,0x1b4122501c);
  lib::L2CValue::L2CValue(aLStack144,0x31ed91fca);
  HVar4 = lib::L2CValue::as_hash(aLStack128);
  HVar5 = lib::L2CValue::as_hash(aLStack144);
  uStack104 = _FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT;
  local_70 = FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SWING;
  uStack96 = local_70;
  uStack88 = uStack104;
  local_50 = local_70;
  uStack72 = uStack104;
  uStack64 = local_70;
  uStack56 = uStack104;
  uVar3 = app::lua_bind::EffectModule__req_on_joint_impl
                    (this->moduleAccessor,HVar4,HVar5,(Vector3f *)&uStack64,(Vector3f *)&local_50,
                     1.0,(Vector3f *)&uStack96,(Vector3f *)&local_70,false,0,
                     in_stack_ffffffffffffff54,0);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,uVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)&uStack96,0x1f33ddd685);
  HVar4 = lib::L2CValue::as_hash((L2CValue *)&uStack96);
  iVar2 = app::lua_bind::SoundModule__play_se_impl
                    (this->moduleAccessor,HVar4,true,false,false,false,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
  lib::L2CValue::L2CValue((L2CValue *)&uStack96,Break_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
  return;
}

