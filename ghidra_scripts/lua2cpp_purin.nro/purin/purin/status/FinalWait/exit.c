
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterPurin::status::FinalEnd_exit(L2CFighterPurin *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,pLVar3);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_FINAL);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PURIN_STATUS_KIND_FINAL_WAIT);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PURIN_STATUS_KIND_FINAL_END);
      uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack64,false);
        bVar1 = lib::L2CValue::as_bool(aLStack64);
        app::lua_bind::SoundModule__set_gamespeed_se_calibration_impl
                  (this->moduleAccessor,(bool)(bVar1 & 1));
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,1.0);
        fVar5 = (float)lib::L2CValue::as_number(aLStack64);
        app::lua_bind::AttackModule__set_attack_scale_impl(this->moduleAccessor,fVar5,false);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PURIN_STATUS_FINAL_WORK_FLOAT_INIT_SCALE);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack64,fVar5);
        fVar5 = (float)lib::L2CValue::as_number(aLStack64);
        app::lua_bind::PostureModule__set_scale_impl(this->moduleAccessor,fVar5,false);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        return;
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

