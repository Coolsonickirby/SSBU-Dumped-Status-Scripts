
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSamusd::status::SpecialGroundLw_main_loop(L2CFighterSamusd *this,L2CValue *return_value)

{
  byte bVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  int iVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
LAB_710001db2c:
    FUN_710001c570(aLStack80,this);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar2 & 1) != 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
      lib::L2CValue::L2CValue(aLStack64,1.0);
      uVar2 = lib::L2CValue::operator__(aLStack64,pLVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar2 & 1) != 0) {
        pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
        uVar2 = lib::L2CValue::operator__(pLVar3,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar2 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SAMUS_STATUS_KIND_SPECIAL_AIR_LW);
          lib::L2CValue::L2CValue(aLStack80,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
          lib::L2CValue::_L2CValue(aLStack80);
          pLVar3 = aLStack64;
          goto LAB_710001dc30;
        }
      }
      FUN_710001cf00(aLStack80,this);
      lib::L2CValue::L2CValue(aLStack64,0);
      uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar2 & 1) != 0) {
        iVar4 = 0;
        goto LAB_710001dc88;
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar2 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      pLVar3 = aLStack80;
LAB_710001dc30:
      lib::L2CValue::_L2CValue(pLVar3);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar2 = lib::L2CValue::operator__(aLStack128,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar2 & 1) != 0) goto LAB_710001db2c;
    }
  }
  iVar4 = 1;
LAB_710001dc88:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar4);
  return;
}

