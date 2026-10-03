
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100005b80(L2CFighterKen *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  BattleObjectModuleAccessor *pBVar6;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x23);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_SPECIAL_HI_COMMAND);
  lib::L2CValue::operator&(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_HI_COMMAND);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar1 & 1U) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x3a);
      lib::L2CValue::L2CValue(aLStack96,pLVar4);
      lua2cpp::L2CFighterCommon::sub_transition_term_id_cont_disguise(this,(L2CValue)0xa0);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_SPECIAL_HI_COMMAND);
        lib::L2CValue::L2CValue(aLStack112,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,true);
        return;
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack112,true);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x23);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_SPECIAL_N2_COMMAND);
    lib::L2CValue::operator&(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_N2_COMMAND)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((bVar1 & 1U) != 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,2);
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_KIND_KEN);
        uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x38);
          lib::L2CValue::L2CValue(aLStack128,pLVar4);
          lua2cpp::L2CFighterCommon::sub_transition_term_id_cont_disguise(this,(L2CValue)0x80);
          bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((bVar1 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_SPECIAL_N2_COMMAND);
            lib::L2CValue::L2CValue(aLStack144,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x70);
            lib::L2CValue::~L2CValue(aLStack144);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::L2CValue((L2CValue *)return_value,true);
            goto LAB_710000631c;
          }
        }
        else {
          pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_ATTACK_COMMAND2);
            lib::L2CValue::L2CValue(aLStack128,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x80);
            lib::L2CValue::~L2CValue(aLStack128);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::L2CValue((L2CValue *)return_value,true);
            goto LAB_710000631c;
          }
        }
      }
    }
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x23);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_SPECIAL_N_COMMAND);
  lib::L2CValue::operator&(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack144);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_N_COMMAND);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((bVar1 & 1U) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x38);
      lib::L2CValue::L2CValue(aLStack144,pLVar4);
      lua2cpp::L2CFighterCommon::sub_transition_term_id_cont_disguise(this,(L2CValue)0x70);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_SPECIAL_N_COMMAND);
        lib::L2CValue::L2CValue(aLStack160,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x60);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,true);
        goto LAB_710000631c;
      }
    }
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x23);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_SPECIAL_S_COMMAND);
  lib::L2CValue::operator&(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack160);
  lib::L2CValue::~L2CValue(aLStack160);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_S_COMMAND);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((bVar1 & 1U) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x39);
      lib::L2CValue::L2CValue(aLStack176,pLVar4);
      lua2cpp::L2CFighterCommon::sub_transition_term_id_cont_disguise(this,(L2CValue)0x50);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack160);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack176);
      }
      else {
        pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,5);
        pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
        bVar2 = app::FighterSpecializer_Ryu::check_special_air_s_command(pBVar6);
        lib::L2CValue::L2CValue(aLStack192,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar5 = lib::L2CValue::operator==(aLStack192,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack176);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_SPECIAL_S_COMMAND);
          lib::L2CValue::L2CValue(aLStack160,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x60);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue((L2CValue *)return_value,true);
          goto LAB_710000631c;
        }
      }
    }
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,2);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_KIND_KEN);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x23);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_ATTACK_COMMAND1);
    lib::L2CValue::operator&(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_COMMAND1);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack160);
      if ((bVar1 & 1U) != 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_ATTACK_COMMAND1);
          lib::L2CValue::L2CValue(aLStack160,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x60);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue((L2CValue *)return_value,true);
          goto LAB_710000631c;
        }
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,false);
LAB_710000631c:
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

