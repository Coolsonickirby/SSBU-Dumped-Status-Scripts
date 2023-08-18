
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSamusd::status::BombJumpG_main_loop(L2CFighterSamusd *this,L2CValue *return_value)

{
  ulong uVar1;
  L2CValue *pLVar2;
  int iVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_710001c570(aLStack80,this);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar1 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar1 & 1) != 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    lib::L2CValue::L2CValue(aLStack64,1.0);
    uVar1 = lib::L2CValue::operator__(aLStack64,pLVar2);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar1 & 1) != 0) {
      pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
      uVar1 = lib::L2CValue::operator__(pLVar2,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar1 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SAMUS_STATUS_KIND_BOMB_JUMP_A);
        lib::L2CValue::L2CValue(aLStack80,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack64);
        goto LAB_710001ce88;
      }
    }
    FUN_710001cf00(aLStack80,this);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar1 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar1 & 1) != 0) {
      iVar3 = 0;
      goto LAB_710001ce90;
    }
  }
LAB_710001ce88:
  iVar3 = 1;
LAB_710001ce90:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

