
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100051cc0(long param_1,L2CValue *param_2)

{
  int iVar1;
  ulong uVar2;
  L2CValue *this;
  long lVar3;
  long lVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = aLStack96;
  lib::L2CValue::L2CValue(aLStack80,0xab9fe52b4);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_MATERIAL_KIND_GRADE_1);
  uVar2 = lib::L2CValue::operator==(param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_MATERIAL_KIND_WOOD);
    uVar2 = lib::L2CValue::operator==(param_2,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_MATERIAL_KIND_STONE);
      uVar2 = lib::L2CValue::operator==(param_2,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
        uVar2 = lib::L2CValue::operator==(param_2,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar2 & 1) == 0) goto LAB_7100051f74;
        lib::L2CValue::L2CValue(aLStack64,0xabe1eb2e7);
        lib::L2CValue::operator=(aLStack80,aLStack64);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,0xbde31c3cc);
        lib::L2CValue::operator=(aLStack80,aLStack64);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,0xafaf34b76);
      lib::L2CValue::operator=(aLStack80,aLStack64);
    }
    this = aLStack64;
  }
  else {
    iVar1 = app::FighterSpecializer_Pickel::get_mining_material_grade1_kind();
    lib::L2CValue::L2CValue(aLStack96,iVar1);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_MATERIAL_GRADE_1_KIND_SAND);
    uVar2 = lib::L2CValue::operator==(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_MATERIAL_GRADE_1_KIND_SOIL);
      uVar2 = lib::L2CValue::operator==(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_MATERIAL_GRADE_1_KIND_ICE);
        uVar2 = lib::L2CValue::operator==(aLStack96,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar2 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_MATERIAL_GRADE_1_KIND_WOOL);
          uVar2 = lib::L2CValue::operator==(aLStack96,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar2 & 1) == 0) goto LAB_7100051f70;
          lib::L2CValue::L2CValue(aLStack64,0xaf428c344);
          lib::L2CValue::operator=(aLStack80,aLStack64);
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,0x9a9c44d34);
          lib::L2CValue::operator=(aLStack80,aLStack64);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,0xaccf3faca);
        lib::L2CValue::operator=(aLStack80,aLStack64);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,0xa6614c06a);
      lib::L2CValue::operator=(aLStack80,aLStack64);
    }
    lib::L2CValue::~L2CValue(aLStack64);
    this = aLStack96;
  }
LAB_7100051f70:
  lib::L2CValue::~L2CValue(this);
LAB_7100051f74:
  lib::L2CValue::L2CValue(aLStack64,0x5831b9722);
  lVar3 = lib::L2CValue::as_integer(aLStack64);
  lVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::VisibilityModule__set_int64_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),lVar3,lVar4);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

