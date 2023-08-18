
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCaptain::status::SpecialLwEnd_init(L2CFighterCaptain *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  undefined8 *this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 auStack96 [2];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack96,_FIGHTER_CAPTAIN_STATUS_WORK_ID_INT_FALCON_KICK_START_SITUATION);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)auStack96);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,iVar1);
  lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)auStack96);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_SITUATION_KIND_GROUND);
  uVar2 = lib::L2CValue::operator__(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  if ((uVar2 & 1) == 0) {
LAB_7100004ba4:
    lib::L2CValue::L2CValue((L2CValue *)&local_40,SITUATION_KIND_AIR);
    uVar2 = lib::L2CValue::operator__(aLStack80,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    if ((uVar2 & 1) != 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,SITUATION_KIND_AIR);
      uVar2 = lib::L2CValue::operator__(pLVar3,(L2CValue *)&local_40);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      if ((uVar2 & 1) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_40,_FIGHTER_KINETIC_TYPE_CAPTAIN_SPECIAL_LW_END_AA);
        iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
        app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar1);
        goto LAB_7100004c28;
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_40,SITUATION_KIND_AIR);
    uVar2 = lib::L2CValue::operator__(aLStack80,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    if ((uVar2 & 1) == 0) goto LAB_7100004d18;
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,_SITUATION_KIND_GROUND);
    uVar2 = lib::L2CValue::operator__(pLVar3,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    if ((uVar2 & 1) == 0) goto LAB_7100004d18;
    lib::L2CValue::L2CValue((L2CValue *)auStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    uVar4 = lib::L2CValue::as_number((L2CValue *)auStack96);
    uVar5 = lib::L2CValue::as_number(aLStack112);
    uVar6 = lib::L2CValue::as_number(aLStack128);
    local_40 = CONCAT44(uVar5,uVar4);
    uStack56 = (ulong)uVar6;
    app::lua_bind::KineticModule__mul_speed_impl(this->moduleAccessor,(Vector3f *)&local_40,-1);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    this_00 = auStack96;
  }
  else {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,_SITUATION_KIND_GROUND);
    uVar2 = lib::L2CValue::operator__(pLVar3,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    if ((uVar2 & 1) == 0) goto LAB_7100004ba4;
    lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_KINETIC_TYPE_CAPTAIN_SPECIAL_LW_END_GG);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar1);
LAB_7100004c28:
    this_00 = &local_40;
  }
  lib::L2CValue::_L2CValue((L2CValue *)this_00);
LAB_7100004d18:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

