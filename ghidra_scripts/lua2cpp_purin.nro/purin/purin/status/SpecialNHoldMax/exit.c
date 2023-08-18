
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPurin::status::SpecialNHoldMax_exit(L2CFighterPurin *this,L2CValue *return_value)

{
  L2CValue *this_00;
  L2CValue *pLVar1;
  ulong uVar2;
  BattleObjectModuleAccessor *pBVar3;
  L2CValue aLStack64 [16];
  
  this_00 = &this->globalTable;
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_SPECIAL_N);
  uVar2 = lib::L2CValue::operator__(pLVar1,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PURIN_STATUS_KIND_SPECIAL_N_HOLD);
    uVar2 = lib::L2CValue::operator__(pLVar1,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PURIN_STATUS_KIND_SPECIAL_N_HOLD_MAX);
      uVar2 = lib::L2CValue::operator__(pLVar1,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar2 & 1) == 0) {
        pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PURIN_STATUS_KIND_SPECIAL_N_ROLL);
        uVar2 = lib::L2CValue::operator__(pLVar1,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar2 & 1) == 0) {
          pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PURIN_STATUS_KIND_SPECIAL_N_ROLL_AIR);
          uVar2 = lib::L2CValue::operator__(pLVar1,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((uVar2 & 1) == 0) {
            pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PURIN_STATUS_KIND_SPECIAL_N_TURN);
            uVar2 = lib::L2CValue::operator__(pLVar1,aLStack64);
            lib::L2CValue::_L2CValue(aLStack64);
            if ((uVar2 & 1) == 0) {
              pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
              lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PURIN_STATUS_KIND_SPECIAL_N_END);
              uVar2 = lib::L2CValue::operator__(pLVar1,aLStack64);
              lib::L2CValue::_L2CValue(aLStack64);
              if ((uVar2 & 1) == 0) {
                pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
                lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PURIN_STATUS_KIND_SPECIAL_N_HIT_END);
                uVar2 = lib::L2CValue::operator__(pLVar1,aLStack64);
                lib::L2CValue::_L2CValue(aLStack64);
                if ((uVar2 & 1) == 0) {
                  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
                  pBVar3 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar1);
                  app::FighterSpecializer_Purin::special_n_clear_copy_attack_data(pBVar3);
                }
              }
            }
          }
        }
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

