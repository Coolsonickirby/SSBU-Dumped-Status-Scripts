
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100014930(L2CFighterTantan *this,L2CValue *return_value)

{
  bool bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x20);
  lib::L2CValue::L2CValue
            (aLStack80,FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_S | FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_N);
  lib::L2CValue::operator&(pLVar3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::~L2CValue(aLStack96);
LAB_7100014a54:
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x20);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_N);
    lib::L2CValue::operator&(pLVar3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::~L2CValue(aLStack96);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_check_button_jump(this);
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar4 = lib::L2CValue::operator==(aLStack112,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterCommon::change_status_jump_mini_attack(this,(L2CValue)0xa0);
        lib::L2CValue::~L2CValue(aLStack80);
        pLVar3 = aLStack96;
        goto LAB_7100014b00;
      }
    }
    bVar1 = false;
  }
  else {
    lua2cpp::L2CFighterCommon::sub_check_button_jump(this);
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar4 = lib::L2CValue::operator==(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) goto LAB_7100014a54;
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_JUMP_MINI_SPECIAL);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
    lib::L2CValue::L2CValue(aLStack96,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::~L2CValue(aLStack96);
    pLVar3 = aLStack80;
LAB_7100014b00:
    lib::L2CValue::~L2CValue(pLVar3);
    bVar1 = true;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,bVar1);
  return;
}

