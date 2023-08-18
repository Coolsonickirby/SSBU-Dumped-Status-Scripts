
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::Dash_main_loop(L2CFighterDemon *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lua2cpp::L2CFighterCommon::status_Dash_Main_common(this,(L2CValue)0xa0);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar1 & 1U) == 0) {
    this_00 = &this->globalTable;
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP);
      uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) {
        pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_S3);
        lib::L2CValue::operator_(pLVar3,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar1 & 1U) != 0) {
          pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
          lib::L2CValue::L2CValue(aLStack112,0x115d6fd7da);
          lib::L2CValue::L2CValue(aLStack128,0x1bc5449a43);
          uVar4 = lib::L2CValue::as_integer(aLStack112);
          uVar5 = lib::L2CValue::as_integer(aLStack128);
          iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
          lib::L2CValue::L2CValue(aLStack80,iVar2);
          uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar4 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STAND_1);
            lib::L2CValue::L2CValue(aLStack112,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack80);
          }
        }
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

