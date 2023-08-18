
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::AttackSquat2_main_loop(L2CFighterDemon *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_SQUAT_WAIT);
  FUN_710002bd60(aLStack80,this,aLStack96);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_ATTACK_FLAG_ENABLE_COMBO_INPUT);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    if ((bVar1 & 1U) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x23);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_2);
        lib::L2CValue::operator_(pLVar4,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_SQUAT_2);
          lib::L2CValue::L2CValue(aLStack112,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack80);
          iVar3 = 1;
          goto LAB_710002c8d8;
        }
        goto LAB_710002c8d0;
      }
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
  }
LAB_710002c8d0:
  iVar3 = 0;
LAB_710002c8d8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

