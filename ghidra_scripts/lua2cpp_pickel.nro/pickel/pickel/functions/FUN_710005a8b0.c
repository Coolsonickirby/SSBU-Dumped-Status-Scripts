
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710005a8b0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_MATERIAL_KIND_DIAMOND);
  uVar2 = lib::L2CValue::operator==(param_3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_MATERIAL_KIND_GOLD);
    uVar2 = lib::L2CValue::operator==(param_3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
      uVar2 = lib::L2CValue::operator==(param_3,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_MATERIAL_KIND_STONE);
        uVar2 = lib::L2CValue::operator==(param_3,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar2 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_MATERIAL_KIND_WOOD);
          uVar2 = lib::L2CValue::operator==(param_3,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar2 & 1) == 0) {
            return;
          }
          lib::L2CValue::L2CValue(aLStack96,0x1608eadf77);
          lib::L2CValue::L2CValue(aLStack112,0x186d09c402);
          uVar2 = lib::L2CValue::as_integer(aLStack96);
          uVar3 = lib::L2CValue::as_integer(aLStack112);
          iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
          lib::L2CValue::L2CValue(aLStack80,iVar1);
          lib::L2CValue::operator=(param_1,aLStack80);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,0x1608eadf77);
          lib::L2CValue::L2CValue(aLStack112,0x1989ce8c66);
          uVar2 = lib::L2CValue::as_integer(aLStack96);
          uVar3 = lib::L2CValue::as_integer(aLStack112);
          iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
          lib::L2CValue::L2CValue(aLStack80,iVar1);
          lib::L2CValue::operator=(param_1,aLStack80);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0x1608eadf77);
        lib::L2CValue::L2CValue(aLStack112,0x1829e43d93);
        uVar2 = lib::L2CValue::as_integer(aLStack96);
        uVar3 = lib::L2CValue::as_integer(aLStack112);
        iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                          (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
        lib::L2CValue::L2CValue(aLStack80,iVar1);
        lib::L2CValue::operator=(param_1,aLStack80);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0x1608eadf77);
      lib::L2CValue::L2CValue(aLStack112,0x18163dc05e);
      uVar2 = lib::L2CValue::as_integer(aLStack96);
      uVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
      lib::L2CValue::L2CValue(aLStack80,iVar1);
      lib::L2CValue::operator=(param_1,aLStack80);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0x1608eadf77);
    lib::L2CValue::L2CValue(aLStack112,0x1b9af25c2f);
    uVar2 = lib::L2CValue::as_integer(aLStack96);
    uVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    lib::L2CValue::operator=(param_1,aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

