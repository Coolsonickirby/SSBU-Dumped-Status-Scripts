
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::AttackLw4Start_init(L2CFighterBayonetta *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_attack_xx4_uniq_process_init(this);
  lib::L2CValue::_L2CValue(aLStack96);
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_ATTACK_LW4_START);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ATTACK_HI4_START);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_ATTACK_S4_START);
      uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) goto LAB_7100007a04;
    }
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BAYONETTA_INSTANCE_WORK_ID_FLAG_WITCH_TIME);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,1);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BAYONETTA_STATUS_ATTACK_INT_WITCH_TIME_SMASH_HOLD);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
  }
LAB_7100007a04:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

