
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterYoshi::status::SpecialSLoop_end(L2CFighterYoshi *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  void *pvVar4;
  KineticEnergyNormal *pKVar5;
  Hash40 HVar6;
  float fVar7;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SPECIAL_S);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_YOSHI_STATUS_KIND_SPECIAL_AIR_S_JUMP);
    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_YOSHI_STATUS_KIND_SPECIAL_S_LOOP);
      uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
        pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_YOSHI_STATUS_KIND_SPECIAL_S_TURN);
        uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar3 & 1) == 0) {
          pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_YOSHI_STATUS_KIND_SPECIAL_S_END);
          uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar3 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,0.0);
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_ANGLE);
            fVar7 = (float)lib::L2CValue::as_number(aLStack80);
            iVar1 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar1);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack80);
            FUN_710000dc80(this);
            goto LAB_7100012060;
          }
        }
      }
    }
  }
  FUN_710001efa0(this);
LAB_7100012060:
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  pvVar4 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,pvVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  pKVar5 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack80);
  app::lua_bind::KineticEnergyNormal__off_consider_ground_normal_impl(pKVar5);
  lib::L2CValue::L2CValue(aLStack96,0x75da53379);
  HVar6 = lib::L2CValue::as_hash(aLStack96);
  app::lua_bind::EffectModule__remove_common_impl(this->moduleAccessor,HVar6);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xfa7982c0a);
  HVar6 = lib::L2CValue::as_hash(aLStack80);
  app::lua_bind::ShakeModule__stop_kind_impl(this->moduleAccessor,HVar6);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

