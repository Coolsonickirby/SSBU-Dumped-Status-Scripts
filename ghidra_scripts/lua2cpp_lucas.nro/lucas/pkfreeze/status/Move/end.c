
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponLucasPkfreeze::status::Move_end(L2CWeaponLucasPkfreeze *this,L2CValue *return_value)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  KineticEnergy *pKVar4;
  Hash40 HVar5;
  Hash40 HVar6;
  int in_stack_ffffffffffffff44;
  undefined in_stack_ffffffffffffff4c;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 uStack64;
  undefined8 uStack56;
  
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,_WEAPON_KINETIC_TYPE_RESET);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&uStack64);
  app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,_WEAPON_LUCAS_PK_FREEZE_KINETIC_ENERGY_ID_GRAVITY);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&uStack64);
  pvVar3 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,pvVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  pKVar4 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack96);
  app::lua_bind::KineticEnergy__clear_speed_impl(pKVar4);
  pKVar4 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack96);
  app::lua_bind::KineticEnergy__unable_impl(pKVar4);
  lib::L2CValue::L2CValue
            ((L2CValue *)&uStack64,_WEAPON_LUCAS_PK_FREEZE_INSTANCE_WORK_ID_INT_EFFECT_HANDLE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&uStack64);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack112,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  uVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::EffectModule__kill_impl(this->moduleAccessor,uVar2,true,true);
  lib::L2CValue::L2CValue(aLStack128,0x146f46b9d5);
  lib::L2CValue::L2CValue(aLStack144,0x31ed91fca);
  HVar5 = lib::L2CValue::as_hash(aLStack128);
  HVar6 = lib::L2CValue::as_hash(aLStack144);
  uStack72 = FIGHTER_STATUS_KIND_ITEM_SHOOT_WAIT;
  local_50 = FIGHTER_STATUS_KIND_ITEM_SWING_S4_START;
  uStack64 = local_50;
  uStack56 = uStack72;
  uVar2 = app::lua_bind::EffectModule__req_follow_impl
                    (this->moduleAccessor,HVar5,HVar6,(Vector3f *)&uStack64,(Vector3f *)&local_50,
                     1.0,false,0,0,-1,in_stack_ffffffffffffff44,0,(bool)in_stack_ffffffffffffff4c,
                     false);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,uVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

