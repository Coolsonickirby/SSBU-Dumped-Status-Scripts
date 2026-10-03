
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100030e30(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  GroundCorrectKind GVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  bool bVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar3 = lib::L2CValue::operator==(param_3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar4 = (L2CValue *)((long)param_2 + 200);
  if ((uVar3 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar3 = lib::L2CValue::operator==(pLVar5,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar3 = lib::L2CValue::operator==(pLVar5,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar3 & 1) != 0) goto LAB_7100030e80;
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar3 = lib::L2CValue::operator==(pLVar5,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar3 = lib::L2CValue::operator==(pLVar5,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar3 & 1) != 0) goto LAB_7100030e80;
    }
    bVar6 = false;
  }
  else {
LAB_7100030e80:
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar3 = lib::L2CValue::operator==(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(param_2,(L2CValue)0x90);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
      GVar1 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),GVar1);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLAG_GROUND);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      lua2cpp::L2CFighterBase::set_situation(param_2,(L2CValue)0xa0);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND);
      GVar1 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),GVar1);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLAG_GROUND);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
    }
    lib::L2CValue::~L2CValue(aLStack80);
    bVar6 = true;
  }
  lib::L2CValue::L2CValue(param_1,bVar6);
  return;
}

