
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_71002331b0(L2CFighterKirby *this,L2CValue *return_value)

{
  bool bVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  float fVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar3 = lib::L2CValue::operator==(pLVar2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    FUN_7100231e90(aLStack80,this);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar1 & 1U) == 0) {
      pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x1a);
      fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,fVar6);
      lib::L2CValue::operator*(pLVar2,aLStack96);
      lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack144,0x1810370793);
      uVar3 = lib::L2CValue::as_integer(aLStack128);
      uVar4 = lib::L2CValue::as_integer(aLStack144);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack112,fVar6);
      uVar3 = lib::L2CValue::operator<=(aLStack80,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar3 & 1) == 0) {
        FUN_7100230210(this);
        iVar5 = 0;
        goto LAB_710023327c;
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_TURN_AIR);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      goto LAB_710023323c;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_LANDING);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
LAB_710023323c:
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  iVar5 = 1;
LAB_710023327c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}

