
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100008450(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_INSTANCE_WORK_ID_FLAG_COPY);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
LAB_710000888c:
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    return;
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_COPY_CHARA);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack160,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_RYU);
  uVar4 = lib::L2CValue::operator==(aLStack160,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_KIND_KEN);
    uVar4 = lib::L2CValue::operator==(aLStack160,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack160);
      goto LAB_710000888c;
    }
  }
  lib::L2CValue::L2CValue(aLStack96,true);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_COPY_CHARA);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_KIND_KEN);
  uVar4 = lib::L2CValue::operator==(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,false);
    lib::L2CValue::operator=(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x23);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_SPECIAL_N2_COMMAND);
    lib::L2CValue::operator&(pLVar5,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_N2_COMMAND)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar2 & 1U) != 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x38);
        lib::L2CValue::L2CValue(aLStack112,pLVar5);
        lua2cpp::L2CFighterCommon::sub_transition_term_id_cont_disguise(this,(L2CValue)0x90);
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_RYU_SPECIAL_N2_COMMAND);
          lib::L2CValue::L2CValue(aLStack128,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x80);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue((L2CValue *)return_value,true);
          goto LAB_7100008870;
        }
      }
    }
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x23);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_SPECIAL_N_COMMAND);
  lib::L2CValue::operator&(pLVar5,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_N_COMMAND);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar2 & 1U) != 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x38);
      lib::L2CValue::L2CValue(aLStack128,pLVar5);
      lua2cpp::L2CFighterCommon::sub_transition_term_id_cont_disguise(this,(L2CValue)0x80);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_RYU_SPECIAL_N_COMMAND);
        lib::L2CValue::L2CValue(aLStack144,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x70);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,true);
        goto LAB_7100008870;
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,false);
LAB_7100008870:
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack160);
  return;
}

