
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003f510(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6,L2CValue *param_7,L2CValue *param_8)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  BattleObjectModuleAccessor *pBVar7;
  Fighter *pFVar8;
  void *pvVar9;
  ulong uVar10;
  L2CValue *pLVar11;
  float fVar12;
  long lVar13;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  ulong local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_PICKEL_GENERATE_ARTICLE_STONE);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  bVar1 = app::lua_bind::ArticleModule__is_generatable_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
  uVar5 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  if ((uVar5 & 1) == 0) {
    pLVar11 = (L2CValue *)(param_2 + 200);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar11,5);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_PICKEL_MATERIAL_KIND_RED_STONE);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
    iVar2 = lib::L2CValue::as_integer(aLStack176);
    iVar2 = app::FighterSpecializer_Pickel::get_material_num(pBVar7,iVar2);
    lib::L2CValue::L2CValue(aLStack160,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0);
    uVar5 = lib::L2CValue::operator<=(aLStack160,(L2CValue *)&local_90);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
      lib::L2CValue::operator+(param_5,(L2CValue *)&local_90);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_FLOAT_POS_X);
      fVar12 = (float)lib::L2CValue::as_number(aLStack160);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar12,iVar2);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
      lib::L2CValue::operator+(param_6,(L2CValue *)&local_90);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_FLOAT_POS_Y);
      fVar12 = (float)lib::L2CValue::as_number(aLStack160);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar12,iVar2);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
      lib::L2CValue::operator+(param_7,(L2CValue *)&local_90);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_FLOAT_ANGLE);
      fVar12 = (float)lib::L2CValue::as_number(aLStack160);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar12,iVar2);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::~L2CValue(aLStack160);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar11,4);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_PICKEL_GENERATE_ARTICLE_STONE);
      pFVar8 = (Fighter *)lib::L2CValue::as_pointer(pLVar6);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      uVar3 = app::FighterSpecializer_Pickel::generate_article(pFVar8,iVar2);
      lib::L2CValue::L2CValue(aLStack160,uVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0x50000000);
      uVar5 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&local_90);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      if ((uVar5 & 1) == 0) {
        uVar3 = lib::L2CValue::as_integer(aLStack160);
        pvVar9 = (void *)app::sv_battle_object::module_accessor(uVar3);
        if (pvVar9 == (void *)0x0) {
          lib::L2CValue::L2CValue(aLStack176,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
        else {
          lib::L2CValue::L2CValue(aLStack176,pvVar9);
        }
        uVar5 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack192,0.0);
          lib::L2CValue::L2CValue(aLStack208,0.0);
          lib::L2CValue::L2CValue(aLStack224,0);
          uVar5 = lib::L2CValue::as_number(param_7);
          lVar13 = lib::L2CValue::as_number(aLStack192);
          uVar3 = lib::L2CValue::as_number(aLStack208);
          local_90 = uVar5 & 0xffffffff | lVar13 << 0x20;
          uStack136 = (ulong)uVar3;
          iVar2 = lib::L2CValue::as_integer(aLStack224);
          pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack176);
          app::lua_bind::PostureModule__set_rot_impl(pBVar7,(Vector3f *)&local_90,iVar2);
          lib::L2CValue::~L2CValue(aLStack224);
          lib::L2CValue::~L2CValue(aLStack208);
          lib::L2CValue::~L2CValue(aLStack192);
          lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
          fVar12 = (float)lib::L2CValue::as_number(param_8);
          bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_90);
          pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack176);
          app::lua_bind::PostureModule__set_scale_impl(pBVar7,fVar12,(bool)(bVar1 & 1));
          lib::L2CValue::~L2CValue((L2CValue *)&local_90);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_90,_WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_FLOAT_SCALE);
          fVar12 = (float)lib::L2CValue::as_number(param_8);
          iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_90);
          pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack176);
          app::lua_bind::WorkModule__set_float_impl(pBVar7,fVar12,iVar2);
          lib::L2CValue::~L2CValue((L2CValue *)&local_90);
          lib::L2CValue::L2CValue(aLStack240,aLStack160);
          lib::L2CValue::L2CValue(aLStack256,param_3);
          FUN_7100035830(aLStack240,aLStack256);
          lib::L2CValue::~L2CValue(aLStack256);
          lib::L2CValue::~L2CValue(aLStack240);
        }
        lib::L2CValue::L2CValue((L2CValue *)&local_90,2);
        lib::L2CValue::operator*(param_4,(L2CValue *)&local_90);
        lib::L2CValue::~L2CValue((L2CValue *)&local_90);
        lib::L2CValue::operator*(aLStack208,param_8);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_90,_FIGHTER_PICKEL_INSTANCE_WORK_ID_FLOAT_RED_STONE_TO_USED);
        fVar12 = (float)lib::L2CValue::as_number(aLStack192);
        iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        app::lua_bind::WorkModule__add_float_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar12,iVar2);
        lib::L2CValue::~L2CValue((L2CValue *)&local_90);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::L2CValue(aLStack224,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack272,0x9bec07102);
        uVar5 = lib::L2CValue::as_integer(aLStack224);
        uVar10 = lib::L2CValue::as_integer(aLStack272);
        fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar5,uVar10);
        lib::L2CValue::L2CValue(aLStack208,fVar12);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,10);
        lib::L2CValue::operator*(aLStack208,(L2CValue *)&local_90);
        lib::L2CValue::~L2CValue((L2CValue *)&local_90);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::L2CValue(aLStack208,_FIGHTER_PICKEL_INSTANCE_WORK_ID_FLOAT_RED_STONE_TO_USED)
        ;
        iVar2 = lib::L2CValue::as_integer(aLStack208);
        fVar12 = (float)app::lua_bind::WorkModule__get_float_impl
                                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar12);
        uVar5 = lib::L2CValue::operator<=(aLStack192,(L2CValue *)&local_90);
        lib::L2CValue::~L2CValue((L2CValue *)&local_90);
        lib::L2CValue::~L2CValue(aLStack208);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
          lib::L2CValue::L2CValue
                    (aLStack208,_FIGHTER_PICKEL_INSTANCE_WORK_ID_FLOAT_RED_STONE_TO_USED);
          fVar12 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
          iVar2 = lib::L2CValue::as_integer(aLStack208);
          app::lua_bind::WorkModule__set_float_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar12,iVar2);
          lib::L2CValue::~L2CValue(aLStack208);
          lib::L2CValue::~L2CValue((L2CValue *)&local_90);
          pLVar11 = (L2CValue *)lib::L2CValue::operator[](pLVar11,5);
          lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_PICKEL_MATERIAL_KIND_RED_STONE);
          lib::L2CValue::L2CValue(aLStack208,1);
          pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar11);
          iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_90);
          iVar4 = lib::L2CValue::as_integer(aLStack208);
          app::FighterSpecializer_Pickel::sub_material_num(pBVar7,iVar2,iVar4);
          lib::L2CValue::~L2CValue(aLStack208);
          lib::L2CValue::~L2CValue((L2CValue *)&local_90);
        }
        lib::L2CValue::L2CValue(param_1,aLStack160);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack176);
      }
      else {
        lib::L2CValue::L2CValue(param_1,0x50000000);
      }
      lib::L2CValue::~L2CValue(aLStack160);
      return;
    }
  }
  lib::L2CValue::L2CValue(param_1,0x50000000);
  return;
}

