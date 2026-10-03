
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100042f70(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *this;
  BattleObjectModuleAccessor *pBVar6;
  L2CValue *pLVar7;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack128,0xb3c0e56b9);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack96);
  pLVar7 = (L2CValue *)(param_2 + 200);
  this = (L2CValue *)lib::L2CValue::operator[](pLVar7,5);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_WOOD);
  pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = app::FighterSpecializer_Pickel::get_material_num(pBVar6,iVar2);
  lib::L2CValue::L2CValue(aLStack128,iVar2);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar4 = lib::L2CValue::operator==(aLStack128,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack160,0);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    if (0 < iVar2) {
      iVar3 = 0;
      do {
        lib::L2CValue::L2CValue(aLStack96,1);
        lib::L2CValue::operator+(aLStack160,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::operator=(aLStack160,aLStack176);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::operator-(param_3,aLStack112);
        lib::L2CValue::operator=(param_3,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0);
        uVar4 = lib::L2CValue::operator<=(param_3,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar4 & 1) != 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,5);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_WOOD);
          pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
          iVar2 = lib::L2CValue::as_integer(aLStack96);
          iVar3 = lib::L2CValue::as_integer(aLStack160);
          app::FighterSpecializer_Pickel::sub_material_num(pBVar6,iVar2,iVar3);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::L2CValue(param_1,true);
          goto LAB_7100043278;
        }
        lib::L2CValue::L2CValue(aLStack192,param_3);
        FUN_7100042cf0(aLStack96,param_2,aLStack192);
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack192);
        if ((bVar1 & 1U) != 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,5);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_WOOD);
          pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
          iVar2 = lib::L2CValue::as_integer(aLStack96);
          iVar3 = lib::L2CValue::as_integer(aLStack160);
          app::FighterSpecializer_Pickel::sub_material_num(pBVar6,iVar2,iVar3);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::L2CValue(param_1,true);
          goto LAB_7100043278;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    lib::L2CValue::L2CValue(param_1,false);
LAB_7100043278:
    pLVar7 = aLStack160;
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,param_3);
    FUN_7100042cf0(param_1,param_2,aLStack144);
    pLVar7 = aLStack144;
  }
  lib::L2CValue::~L2CValue(pLVar7);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

