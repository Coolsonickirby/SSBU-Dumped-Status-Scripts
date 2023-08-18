
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponNessPkflash::status::Move_end(L2CWeaponNessPkflash *this,L2CValue *return_value)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  KineticEnergy *pKVar4;
  ulong uVar5;
  Hash40 HVar6;
  Hash40 HVar7;
  int in_stack_ffffffffffffff34;
  undefined in_stack_ffffffffffffff3c;
  L2CValue aLStack160 [16];
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
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,_WEAPON_NESS_PK_FLASH_KINETIC_ENERGY_ID_GRAVITY);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&uStack64);
  pvVar3 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,pvVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  pKVar4 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack96);
  app::lua_bind::KineticEnergy__clear_speed_impl(pKVar4);
  pKVar4 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack96);
  app::lua_bind::KineticEnergy__unable_impl(pKVar4);
  lib::L2CValue::L2CValue
            ((L2CValue *)&uStack64,_WEAPON_NESS_PK_FLASH_INSTANCE_WORK_ID_INT_EFFECT_HANDLE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&uStack64);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack112,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  uVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::EffectModule__kill_impl(this->moduleAccessor,uVar2,true,true);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,_WEAPON_INSTANCE_WORK_ID_INT_CUSTOMIZE_NO);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&uStack64);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack128,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,0);
  uVar5 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&uStack64);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&uStack64,1);
    uVar5 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&uStack64);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack144,0x15999ff37c);
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,0x15ee98c3ea);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,0x13ce8ddc15);
  }
  lib::L2CValue::L2CValue(aLStack160,0x31ed91fca);
  HVar6 = lib::L2CValue::as_hash(aLStack144);
  HVar7 = lib::L2CValue::as_hash(aLStack160);
  uStack72 = FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_HI4_START;
  local_50 = FIGHTER_STATUS_KIND_ATTACK_S4_START;
  uStack64 = local_50;
  uStack56 = uStack72;
  uVar2 = app::lua_bind::EffectModule__req_follow_impl
                    (this->moduleAccessor,HVar6,HVar7,(Vector3f *)&uStack64,(Vector3f *)&local_50,
                     1.0,false,0,0,-1,in_stack_ffffffffffffff34,0,(bool)in_stack_ffffffffffffff3c,
                     false);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,uVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

