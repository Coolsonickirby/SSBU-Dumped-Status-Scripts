
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100126c00(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(param_1,-1);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
  uVar2 = lib::L2CValue::operator<=(param_3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lib::L2CValue::L2CValue(aLStack96,0x2292c2e1b1);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_MATERIAL_KIND_GRADE_1);
  uVar2 = lib::L2CValue::operator==(param_3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_MATERIAL_KIND_WOOD);
    uVar2 = lib::L2CValue::operator==(param_3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_MATERIAL_KIND_STONE);
      uVar2 = lib::L2CValue::operator==(param_3,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
        uVar2 = lib::L2CValue::operator==(param_3,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar2 & 1) == 0) goto LAB_7100126db8;
        lib::L2CValue::L2CValue(aLStack80,0x1f683688e8);
        lib::L2CValue::operator=(aLStack96,aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0x20b9de6ce6);
        lib::L2CValue::operator=(aLStack96,aLStack80);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0x1f4a111697);
      lib::L2CValue::operator=(aLStack96,aLStack80);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x2292c2e1b1);
    lib::L2CValue::operator=(aLStack96,aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack80);
LAB_7100126db8:
  lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
  uVar2 = lib::L2CValue::as_integer(aLStack112);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::operator=(param_1,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

