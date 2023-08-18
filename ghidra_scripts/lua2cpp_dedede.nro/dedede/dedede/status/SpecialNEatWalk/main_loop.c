
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDedede::status::SpecialNEatWalk_main_loop(L2CFighterDedede *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CAgent *this_01;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_N_EAT_FALL);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    pLVar4 = aLStack96;
LAB_710002f434:
    lib::L2CValue::_L2CValue(pLVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    goto LAB_710002f440;
  }
  lib::L2CValue::L2CValue(aLStack96,_CONTROL_PAD_BUTTON_ATTACK);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_N_SPIT);
      lib::L2CValue::L2CValue(aLStack96,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      goto LAB_710002f540;
    }
    FUN_710002f940(aLStack96,this);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DEDEDE_STATUS_SPECIAL_N_WORK_INT_SPIT_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_N_SPIT);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
      pLVar4 = aLStack112;
      goto LAB_710002f434;
    }
    FUN_710002fb90(aLStack112,this);
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar4 = (L2CValue *)0x1a;
    this_01 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    lib::L2CAgent::math_abs(this_01,pLVar4);
    lib::L2CValue::L2CValue(aLStack144,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack160,0xcf44ba9e5);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    uVar6 = lib::L2CValue::as_integer(aLStack160);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack128,fVar7);
    uVar5 = lib::L2CValue::operator_(aLStack80,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
LAB_710002f73c:
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
      fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack144,fVar7);
      lib::L2CValue::operator_(pLVar4,aLStack144);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar5 = lib::L2CValue::operator_(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar5 & 1) != 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_N_EAT_WAIT);
          lib::L2CValue::L2CValue(aLStack128,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x80);
          goto LAB_710002f808;
        }
      }
LAB_710002f440:
      iVar3 = 0;
      goto LAB_710002f558;
    }
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) goto LAB_710002f73c;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_N_EAT_WAIT);
    lib::L2CValue::L2CValue(aLStack128,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x80);
LAB_710002f808:
    pLVar4 = aLStack128;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_N_SPIT);
    lib::L2CValue::L2CValue(aLStack96,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
LAB_710002f540:
    pLVar4 = aLStack96;
  }
  lib::L2CValue::_L2CValue(pLVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  iVar3 = 1;
LAB_710002f558:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

