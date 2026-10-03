
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002e0a0(L2CValue *param_1,L2CFighterCommon *param_2)

{
  L2CValue *this;
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this = &param_2->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lua2cpp::L2CFighterCommon::sub_transition_group_check_air_escape(param_2);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
LAB_710002e344:
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar1 & 1) == 0) {
LAB_710002e360:
      iVar3 = 0;
      goto LAB_710002e368;
    }
  }
  else {
    FUN_710002e8d0(aLStack96,param_2);
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) goto LAB_710002e360;
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_F);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(param_2->moduleAccessor,iVar3)
    ;
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
LAB_710002e244:
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_B);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                        (param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x21);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_B);
        lib::L2CValue::operator&(pLVar4,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack160,FIGHTER_STATUS_KIND_ESCAPE_B);
          lib::L2CValue::L2CValue(aLStack176,true);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x60,(L2CValue)0x50);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack160);
          goto LAB_710002e354;
        }
      }
      lua2cpp::L2CFighterCommon::sub_transition_group_check_ground_guard(param_2);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      goto LAB_710002e344;
    }
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x21);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_F);
    lib::L2CValue::operator&(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) goto LAB_710002e244;
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_KIND_ESCAPE_F);
    lib::L2CValue::L2CValue(aLStack144,true);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x80,(L2CValue)0x70);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
  }
LAB_710002e354:
  iVar3 = 1;
LAB_710002e368:
  lib::L2CValue::L2CValue(param_1,iVar3);
  return;
}

