
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::AttackSquat4_main_loop(L2CFighterDemon *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  uchar uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  BattleObjectModuleAccessor **ppBVar9;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
  FUN_710002bd60(aLStack80,this,aLStack96);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar1 & 1U) != 0) goto LAB_710002bb40;
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DEMON_STATUS_ATTACK_SQUAT_4_FLAG_ATTACK);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  ppBVar9 = &this->moduleAccessor;
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar6 & 1) == 0) goto LAB_710002bb40;
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_DEMON_STATUS_ATTACK_SQUAT_4_FLAG_EXTEND_SPECIAL_HI_COMMAND);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar7 = aLStack128;
LAB_710002b254:
    lib::L2CValue::_L2CValue(pLVar7);
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x23);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_SPECIAL_HI_COMMAND);
    lib::L2CValue::operator_(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_COMMAND_CATEGORY4);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT4_SPECIAL_HI_COMMAND);
      lib::L2CValue::L2CValue(aLStack144,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack160,0x2b87c7acb0);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      uVar8 = lib::L2CValue::as_integer(aLStack160);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack128,iVar4);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      uVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::FighterControlModuleImpl__set_command_life_count_impl
                (*ppBVar9,iVar4,iVar5,uVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_DEMON_STATUS_ATTACK_SQUAT_4_FLAG_EXTEND_SPECIAL_HI_COMMAND);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar4);
      pLVar7 = aLStack80;
      goto LAB_710002b254;
    }
  }
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_DEMON_STATUS_ATTACK_SQUAT_4_FLAG_EXTEND_COMMAND_623ALONG);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar7 = aLStack128;
LAB_710002b41c:
    lib::L2CValue::_L2CValue(pLVar7);
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x23);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_623ALONG);
    lib::L2CValue::operator_(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_COMMAND_CATEGORY4);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT4_COMMAND_623ALONG);
      lib::L2CValue::L2CValue(aLStack144,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack160,0x2b87c7acb0);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      uVar8 = lib::L2CValue::as_integer(aLStack160);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack128,iVar4);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      uVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::FighterControlModuleImpl__set_command_life_count_impl
                (*ppBVar9,iVar4,iVar5,uVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_DEMON_STATUS_ATTACK_SQUAT_4_FLAG_EXTEND_COMMAND_623ALONG);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar4);
      pLVar7 = aLStack80;
      goto LAB_710002b41c;
    }
  }
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_DEMON_STATUS_ATTACK_SQUAT_4_FLAG_EXTEND_COMMAND_623BLONG);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar7 = aLStack128;
LAB_710002b5e4:
    lib::L2CValue::_L2CValue(pLVar7);
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x23);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_623BLONG);
    lib::L2CValue::operator_(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_COMMAND_CATEGORY4);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT4_COMMAND_623BLONG);
      lib::L2CValue::L2CValue(aLStack144,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack160,0x2b87c7acb0);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      uVar8 = lib::L2CValue::as_integer(aLStack160);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack128,iVar4);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      uVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::FighterControlModuleImpl__set_command_life_count_impl
                (*ppBVar9,iVar4,iVar5,uVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_DEMON_STATUS_ATTACK_SQUAT_4_FLAG_EXTEND_COMMAND_623BLONG);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar4);
      pLVar7 = aLStack80;
      goto LAB_710002b5e4;
    }
  }
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_DEMON_STATUS_ATTACK_SQUAT_4_FLAG_EXTEND_COMMAND_623STRICT);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar7 = aLStack128;
LAB_710002b7ac:
    lib::L2CValue::_L2CValue(pLVar7);
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x23);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_623STRICT);
    lib::L2CValue::operator_(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_COMMAND_CATEGORY4);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT4_COMMAND_623STRICT);
      lib::L2CValue::L2CValue(aLStack144,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack160,0x2b87c7acb0);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      uVar8 = lib::L2CValue::as_integer(aLStack160);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack128,iVar4);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      uVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::FighterControlModuleImpl__set_command_life_count_impl
                (*ppBVar9,iVar4,iVar5,uVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_DEMON_STATUS_ATTACK_SQUAT_4_FLAG_EXTEND_COMMAND_623STRICT);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar4);
      pLVar7 = aLStack80;
      goto LAB_710002b7ac;
    }
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DEMON_STATUS_ATTACK_SQUAT_4_FLAG_EXTEND_COMMAND_623A);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar7 = aLStack128;
LAB_710002b974:
    lib::L2CValue::_L2CValue(pLVar7);
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x23);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_623A);
    lib::L2CValue::operator_(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_COMMAND_CATEGORY4);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT4_COMMAND_623A);
      lib::L2CValue::L2CValue(aLStack144,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack160,0x2b87c7acb0);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      uVar8 = lib::L2CValue::as_integer(aLStack160);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack128,iVar4);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      uVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::FighterControlModuleImpl__set_command_life_count_impl
                (*ppBVar9,iVar4,iVar5,uVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_DEMON_STATUS_ATTACK_SQUAT_4_FLAG_EXTEND_COMMAND_623A);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar4);
      pLVar7 = aLStack80;
      goto LAB_710002b974;
    }
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DEMON_STATUS_ATTACK_SQUAT_4_FLAG_EXTEND_COMMAND_623NB)
  ;
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar7 = aLStack128;
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x23);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_623NB);
    lib::L2CValue::operator_(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar1 & 1U) == 0) goto LAB_710002bb40;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_COMMAND_CATEGORY4);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT4_COMMAND_623NB);
    lib::L2CValue::L2CValue(aLStack144,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack160,0x2b87c7acb0);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    uVar8 = lib::L2CValue::as_integer(aLStack160);
    iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack128,iVar4);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    uVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::FighterControlModuleImpl__set_command_life_count_impl(*ppBVar9,iVar4,iVar5,uVar3)
    ;
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_DEMON_STATUS_ATTACK_SQUAT_4_FLAG_EXTEND_COMMAND_623NB);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar4);
    pLVar7 = aLStack80;
  }
  lib::L2CValue::_L2CValue(pLVar7);
LAB_710002bb40:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

