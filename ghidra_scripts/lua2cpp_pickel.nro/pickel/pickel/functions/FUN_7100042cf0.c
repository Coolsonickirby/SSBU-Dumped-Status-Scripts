
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100042cf0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  BattleObjectModuleAccessor *pBVar6;
  L2CValue *this;
  undefined auStack144 [32];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack112,0xba5070703);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),5);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_MATERIAL_KIND_GRADE_1);
  pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  iVar1 = app::FighterSpecializer_Pickel::get_material_num(pBVar6,iVar1);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::operator*(aLStack80,aLStack96);
  uVar3 = lib::L2CValue::operator<=(param_3,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(param_1,false);
  }
  else {
    this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),5);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_MATERIAL_KIND_GRADE_1);
    pLVar5 = aLStack80;
    lib::L2CValue::operator/(param_3,pLVar5);
    lib::L2CAgent::math_ceil((L2CAgent *)auStack144,pLVar5);
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this);
    iVar1 = lib::L2CValue::as_integer(aLStack112);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack144 + 0x10));
    app::FighterSpecializer_Pickel::sub_material_num(pBVar6,iVar1,iVar2);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack144 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack144);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(param_1,true);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

