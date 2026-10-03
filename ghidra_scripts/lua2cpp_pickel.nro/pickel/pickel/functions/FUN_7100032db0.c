
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100032db0(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  void *pvVar5;
  Rhombus2 *pRVar6;
  BattleObjectModuleAccessor *pBVar7;
  L2CValue *this;
  float fVar8;
  undefined8 uVar9;
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
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
  
  uVar2 = lib::L2CValue::as_integer(param_3);
  bVar1 = app::sv_battle_object::is_active(uVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack224,false);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack224);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(param_1,false);
    lib::L2CValue::L2CValue(param_1 + 0x10,0);
    lib::L2CValue::L2CValue(param_1 + 0x20,0);
    lib::L2CValue::L2CValue(param_1 + 0x30,0);
    lib::L2CValue::L2CValue(param_1 + 0x40,0);
    return;
  }
  uVar2 = lib::L2CValue::as_integer(param_3);
  pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar2);
  if (pvVar5 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack80,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,pvVar5);
  }
  uVar4 = lib::L2CValue::operator==(aLStack80,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(param_1,false);
    lib::L2CValue::L2CValue(param_1 + 0x10,0);
    lib::L2CValue::L2CValue(param_1 + 0x20,0);
    lib::L2CValue::L2CValue(param_1 + 0x30,0);
    lib::L2CValue::L2CValue(param_1 + 0x40,0);
    goto LAB_710003332c;
  }
  lib::L2CValue::L2CValue(aLStack224,false);
  uVar4 = lib::L2CValue::operator==(param_4,aLStack224);
  lib::L2CValue::~L2CValue(aLStack224);
  if ((uVar4 & 1) == 0) {
LAB_7100033064:
    lib::L2CValue::L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack80);
    uVar9 = app::lua_bind::PostureModule__pos_2d_impl(pBVar7);
    lib::L2CValue::L2CValue(aLStack224,(float)uVar9);
    lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar9 >> 0x20));
    lib::L2CValue::operator=(aLStack96,aLStack224);
    lib::L2CValue::operator=(aLStack112,aLStack208);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack224,0);
    iVar3 = lib::L2CValue::as_integer(aLStack224);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack80);
    fVar8 = (float)app::lua_bind::PostureModule__rot_x_impl(pBVar7,iVar3);
    lib::L2CValue::L2CValue(aLStack160,fVar8);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack240,1.0);
    uVar2 = lib::L2CValue::as_integer(param_3);
    uVar2 = app::sv_battle_object::category(uVar2);
    lib::L2CValue::L2CValue(aLStack256,uVar2 & 0xff);
    lib::L2CValue::L2CValue(aLStack224,_BATTLE_OBJECT_CATEGORY_ITEM);
    uVar4 = lib::L2CValue::operator==(aLStack256,aLStack224);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack256);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack272,param_3);
      FUN_7100032ca0(aLStack256,aLStack272);
      lib::L2CValue::L2CValue(aLStack224,true);
      uVar4 = lib::L2CValue::operator==(aLStack256,aLStack224);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack272);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack256,_WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_FLOAT_SCALE);
        iVar3 = lib::L2CValue::as_integer(aLStack256);
        pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack80);
        fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(pBVar7,iVar3);
        lib::L2CValue::L2CValue(aLStack224,fVar8);
        lib::L2CValue::operator=(aLStack240,aLStack224);
LAB_71000332b0:
        lib::L2CValue::~L2CValue(aLStack224);
        this = aLStack256;
        goto LAB_71000332bc;
      }
      lib::L2CValue::L2CValue(aLStack288,param_3);
      FUN_7100039930(aLStack256,aLStack288);
      lib::L2CValue::L2CValue(aLStack224,true);
      uVar4 = lib::L2CValue::operator==(aLStack256,aLStack224);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack288);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack256,_WEAPON_PICKEL_PLATE_INSTANCE_WORK_ID_FLOAT_SCALE);
        iVar3 = lib::L2CValue::as_integer(aLStack256);
        pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack80);
        fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(pBVar7,iVar3);
        lib::L2CValue::L2CValue(aLStack224,fVar8);
        lib::L2CValue::operator=(aLStack240,aLStack224);
        goto LAB_71000332b0;
      }
    }
    else {
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack80);
      fVar8 = (float)app::lua_bind::ModelModule__scale_impl(pBVar7);
      lib::L2CValue::L2CValue(aLStack224,fVar8);
      lib::L2CValue::operator=(aLStack240,aLStack224);
      this = aLStack224;
LAB_71000332bc:
      lib::L2CValue::~L2CValue(this);
    }
    lib::L2CValue::L2CValue(param_1,true);
    lib::L2CValue::L2CValue(param_1 + 0x10,aLStack96);
    lib::L2CValue::L2CValue(param_1 + 0x20,aLStack112);
    lib::L2CValue::L2CValue(param_1 + 0x30,aLStack160);
    lib::L2CValue::L2CValue(param_1 + 0x40,aLStack240);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack160);
  }
  else {
    lib::L2CValue::L2CValue(aLStack224,true);
    bVar1 = lib::L2CValue::as_bool(aLStack224);
    pRVar6 = (Rhombus2 *)
             app::lua_bind::GroundModule__get_rhombus_impl
                       (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(bool)(bVar1 & 1));
    app::lua_bind::Rhombus2__store_l2c_table_impl(pRVar6);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack128,param_3);
    lib::L2CValue::L2CValue(aLStack144,false);
    FUN_7100035ca0(aLStack112,param_2,aLStack128,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack176,aLStack96);
    lib::L2CValue::L2CValue(aLStack192,aLStack112);
    FUN_7100035280(aLStack160,aLStack176,aLStack192);
    lib::L2CValue::L2CValue(aLStack224,false);
    uVar4 = lib::L2CValue::operator==(aLStack160,aLStack224);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      goto LAB_7100033064;
    }
    lib::L2CValue::L2CValue(param_1,false);
    lib::L2CValue::L2CValue(param_1 + 0x10,0);
    lib::L2CValue::L2CValue(param_1 + 0x20,0);
    lib::L2CValue::L2CValue(param_1 + 0x30,0);
    lib::L2CValue::L2CValue(param_1 + 0x40,0);
  }
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
LAB_710003332c:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

