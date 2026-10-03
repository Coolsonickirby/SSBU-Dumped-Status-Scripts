
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_71000008c0(L2CFighterDedede *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Fighter *pFVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DEDEDE_INSTANCE_WORK_ID_INT_PICKUP_KIND);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack80,-1);
  uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,4);
    pFVar7 = (Fighter *)lib::L2CValue::as_pointer(pLVar6);
    bVar1 = app::FighterSpecializer_Dedede::check_special_s_pickup_goldo(pFVar7);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,-1);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEDEDE_INSTANCE_WORK_ID_INT_PICKUP_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x50000000);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEDEDE_INSTANCE_WORK_ID_INT_PICKUP_TASK_ID);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_S);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x20);
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_S);
        lib::L2CValue::operator&(pLVar6,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar2 & 1U) != 0) {
          iVar3 = app::lua_bind::ItemModule__get_pickable_item_size_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack96,iVar3);
          lib::L2CValue::L2CValue(aLStack80,ITEM_SIZE_LIGHT);
          uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_KIND_ITEM_LIGHT_PICKUP);
            lib::L2CValue::L2CValue(aLStack144,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
            lib::L2CValue::~L2CValue(aLStack144);
            lib::L2CValue::~L2CValue(aLStack128);
            iVar3 = 1;
            goto LAB_7100031e64;
          }
        }
      }
    }
  }
  iVar3 = 0;
LAB_7100031e64:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

