
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100004540(L2CFighterPopo *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue *in_x1;
  L2CValue *in_x2;
  L2CValue *in_x3;
  float fVar7;
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
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack192,in_x1);
  lib::L2CValue::L2CValue(aLStack208,in_x2);
  lib::L2CValue::L2CValue(aLStack224,in_x3);
  lib::L2CValue::L2CValue(aLStack96,aLStack192);
  lib::L2CValue::L2CValue(aLStack112,aLStack208);
  lib::L2CValue::L2CValue(aLStack128,aLStack224);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack64,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack160,0xe995b27cc);
  uVar4 = lib::L2CValue::as_integer(aLStack64);
  uVar5 = lib::L2CValue::as_integer(aLStack160);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack144,fVar7);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_POPO_LINK_NO_PARTNER);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack160);
  if ((bVar2 & 1U) != 0) {
    fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,fVar7);
    lib::L2CValue::L2CValue(aLStack64,1.0);
    uVar4 = lib::L2CValue::operator==(aLStack160,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((uVar4 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x18cdc1683);
      lib::L2CValue::operator+(pLVar6,aLStack144);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x18cdc1683);
      lib::L2CValue::operator=(pLVar6,aLStack64);
    }
    else {
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x18cdc1683);
      lib::L2CValue::operator-(pLVar6,aLStack144);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x18cdc1683);
      lib::L2CValue::operator=(pLVar6,aLStack64);
    }
    lib::L2CValue::~L2CValue(aLStack64);
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack64,pLVar6);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack160,pLVar6);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x162d277af);
  lib::L2CValue::L2CValue(aLStack176,pLVar6);
  lua2cpp::L2CFighterCommon::sub_update_effect(this,(L2CValue)0xc0,(L2CValue)0x60,(L2CValue)0x50);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  return;
}

