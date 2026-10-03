
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100125af0(L2CValue *param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  L2CValue *this;
  BattleObjectModuleAccessor *pBVar4;
  ulong uVar5;
  int iVar6;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(param_1,_FIGHTER_PICKEL_MATERIAL_KIND_NONE);
  iVar1 = _FIGHTER_PICKEL_MATERIAL_KIND_NUM;
  if (_FIGHTER_PICKEL_MATERIAL_KIND_GRADE_1 < _FIGHTER_PICKEL_MATERIAL_KIND_NUM) {
    iVar6 = _FIGHTER_PICKEL_MATERIAL_KIND_GRADE_1;
    do {
      lib::L2CValue::L2CValue(aLStack176,iVar6);
      lib::L2CValue::L2CValue(aLStack160,false);
      this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),5);
      pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this);
      iVar3 = lib::L2CValue::as_integer(aLStack176);
      iVar3 = app::FighterSpecializer_Pickel::get_material_num(pBVar4,iVar3);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::L2CValue(aLStack144,aLStack176);
      FUN_7100126c00(aLStack128,param_2,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack96,0);
      uVar5 = lib::L2CValue::operator<(aLStack96,aLStack128);
      lib::L2CValue::~L2CValue(aLStack96);
      if (((uVar5 & 1) != 0) &&
         (uVar5 = lib::L2CValue::operator<=(aLStack128,aLStack112), (uVar5 & 1) != 0)) {
        lib::L2CValue::L2CValue(aLStack96,true);
        lib::L2CValue::operator=(aLStack160,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
      }
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack160);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack176);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,iVar6);
        lib::L2CValue::operator=(param_1,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        return;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  return;
}

