
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::DonkeySpecialNLoop_end(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::operator_(aLStack80,pLVar3);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_WAIT);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FALL);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_ESCAPE_F);
      uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_ESCAPE_B);
        uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_DONKEY_SPECIAL_N_ATTACK);
          uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_DONKEY_SPECIAL_N_CANCEL);
            uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
            lib::L2CValue::_L2CValue(aLStack64);
            if ((uVar4 & 1) == 0) {
              lib::L2CValue::L2CValue
                        (aLStack64,_FIGHTER_KIRBY_STATUS_KIND_DONKEY_SPECIAL_N_JUMP_CANCEL);
              uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
              lib::L2CValue::_L2CValue(aLStack64);
              if ((uVar4 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_DONKEY_SPECIAL_N_END);
                uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
                lib::L2CValue::_L2CValue(aLStack64);
                if ((uVar4 & 1) == 0) {
                  lib::L2CValue::L2CValue(aLStack64,0);
                  lib::L2CValue::L2CValue
                            (aLStack96,_FIGHTER_DONKEY_INSTANCE_WORK_ID_INT_SPECIAL_N_COUNT);
                  iVar1 = lib::L2CValue::as_integer(aLStack64);
                  iVar2 = lib::L2CValue::as_integer(aLStack96);
                  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
                  lib::L2CValue::_L2CValue(aLStack96);
                  lib::L2CValue::_L2CValue(aLStack64);
                }
              }
            }
          }
        }
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

