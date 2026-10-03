
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100003780(L2CFighterDolly *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_TURN);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_TURN_DASH);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) goto LAB_7100003854;
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_TURN_RUN);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) goto LAB_7100003854;
  }
  else {
LAB_7100003854:
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0xe);
    lib::L2CValue::L2CValue(aLStack96,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack112,0xfa7e798f8);
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    uVar5 = lib::L2CValue::operator<=(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x20);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_HI);
      lib::L2CValue::operator&(pLVar4,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_HI);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (this->moduleAccessor,iVar3);
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
          if ((bVar1 & 1U) != 0) goto LAB_7100003a2c;
        }
      }
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x1f);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_FLAG_SPECIAL_TRIGGER);
      lib::L2CValue::operator&(pLVar4,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        app::lua_bind::PostureModule__reverse_lr_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DOLLY_STATUS_KIND_SPECIAL_B);
        lib::L2CValue::L2CValue(aLStack112,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack80);
        bVar1 = true;
        goto LAB_7100003a34;
      }
    }
  }
LAB_7100003a2c:
  bVar1 = false;
LAB_7100003a34:
  lib::L2CValue::L2CValue((L2CValue *)return_value,bVar1);
  return;
}

