
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100005ce0(L2CFighterYounglink *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_ITEM_KIND_LINKBOMB);
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_TOONLINK);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,2);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_YOUNGLINK);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_ITEM_KIND_YOUNGLINKBOMB);
      lib::L2CValue::operator=(aLStack96,aLStack80);
      goto LAB_7100005dcc;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_ITEM_KIND_TOONLINKBOMB);
    lib::L2CValue::operator=(aLStack96,aLStack80);
LAB_7100005dcc:
    lib::L2CValue::~L2CValue(aLStack80);
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x1f);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_PAD_FLAG_SPECIAL_TRIGGER);
  lib::L2CValue::operator&(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::~L2CValue(aLStack112);
  }
  else {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x1b);
    lib::L2CValue::operator-(pLVar4);
    lib::L2CValue::L2CValue(aLStack144,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack160,0xfe59ae799);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    uVar6 = lib::L2CValue::as_integer(aLStack160);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack128,fVar7);
    uVar5 = lib::L2CValue::operator<=(aLStack128,aLStack80);
    if ((uVar5 & 1) == 0) {
      bVar2 = 0;
    }
    else {
      iVar3 = app::lua_bind::ItemModule__get_have_item_kind_impl(this->moduleAccessor,0);
      lib::L2CValue::L2CValue(aLStack176,iVar3);
      uVar5 = lib::L2CValue::operator==(aLStack176,aLStack96);
      if ((uVar5 & 1) == 0) {
        bVar2 = 0;
      }
      else {
        lib::L2CValue::L2CValue(aLStack208,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_THROW);
        iVar3 = lib::L2CValue::as_integer(aLStack208);
        bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack192,(bool)(bVar2 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack192);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack208);
      }
      lib::L2CValue::~L2CValue(aLStack176);
    }
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar2 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_STATUS_KIND_ITEM_THROW);
      lib::L2CValue::L2CValue(aLStack240,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x20,(L2CValue)0x10);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::L2CValue((L2CValue *)return_value,true);
      goto LAB_7100005fa0;
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,false);
LAB_7100005fa0:
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

