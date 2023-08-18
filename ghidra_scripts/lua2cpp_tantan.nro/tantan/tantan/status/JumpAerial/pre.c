
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::JumpAerial_pre(L2CFighterTantan *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  ulong uVar2;
  L2CValue aLStack376 [16];
  L2CValue aLStack360 [16];
  L2CValue aLStack344 [16];
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [16];
  L2CValue aLStack120 [24];
  
  lib::L2CValue::L2CValue(aLStack120,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
  lib::L2CValue::L2CValue(aLStack152,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
  lib::L2CValue::L2CValue(aLStack168,_FIGHTER_KINETIC_TYPE_JUMP_AERIAL);
  lib::L2CValue::L2CValue(aLStack184,0);
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack264,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_JUMP_AERIAL);
  uVar2 = lib::L2CValue::operator__(pLVar1,aLStack264);
  lib::L2CValue::_L2CValue(aLStack264);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack280,aLStack184);
    FUN_7100070c20(aLStack264,aLStack280);
    lib::L2CValue::operator_(aLStack120,aLStack264);
    lib::L2CValue::operator_(aLStack136,aLStack248);
    lib::L2CValue::operator_(aLStack152,aLStack232);
    lib::L2CValue::operator_(aLStack168,aLStack216);
    lib::L2CValue::operator_(aLStack184,aLStack200);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack280);
  }
  lib::L2CValue::L2CValue(aLStack296,true);
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack264,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_JUMP_AERIAL);
  uVar2 = lib::L2CValue::operator__(pLVar1,aLStack264);
  lib::L2CValue::_L2CValue(aLStack264);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack264,false);
    lib::L2CValue::operator_(aLStack296,aLStack264);
    lib::L2CValue::_L2CValue(aLStack264);
  }
  lib::L2CValue::L2CValue(aLStack264,aLStack120);
  lib::L2CValue::L2CValue(aLStack312,aLStack136);
  lib::L2CValue::L2CValue(aLStack328,aLStack152);
  lib::L2CValue::L2CValue(aLStack344,aLStack168);
  lib::L2CValue::L2CValue(aLStack360,aLStack184);
  lib::L2CValue::L2CValue(aLStack376,aLStack296);
  lua2cpp::L2CFighterCommon::status_pre_JumpAerial_param
            (this,(L2CValue)0xf8,(L2CValue)0xc8,(L2CValue)0xb8,(L2CValue)0xa8,(L2CValue)0x98,
             (L2CValue)0x88);
  lib::L2CValue::_L2CValue(aLStack376);
  lib::L2CValue::_L2CValue(aLStack360);
  lib::L2CValue::_L2CValue(aLStack344);
  lib::L2CValue::_L2CValue(aLStack328);
  lib::L2CValue::_L2CValue(aLStack312);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack296);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack120);
  return;
}

