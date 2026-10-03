
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710000fb20(L2CFighterDemon *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_INSTANCE_WORK_ID_INT_INVALID_CATCH_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x23);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_323CATCH);
      lib::L2CValue::operator&(pLVar4,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_CATCH);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        if ((bVar1 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_DASH);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                            (this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((bVar1 & 1U) == 0) goto LAB_710000fd28;
        }
        else {
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack96);
        }
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_CATCH_COMMAND);
        lib::L2CValue::L2CValue(aLStack96,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack80);
        bVar1 = true;
        goto LAB_710000fd30;
      }
    }
  }
LAB_710000fd28:
  bVar1 = false;
LAB_710000fd30:
  lib::L2CValue::L2CValue((L2CValue *)return_value,bVar1);
  return;
}

