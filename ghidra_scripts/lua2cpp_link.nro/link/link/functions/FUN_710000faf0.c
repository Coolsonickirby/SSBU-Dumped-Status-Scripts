
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000faf0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  float *pfVar6;
  L2CValue *pLVar7;
  FighterModuleAccessor *pFVar8;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined auStack360 [32];
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [24];
  
  bVar2 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack184,_FIGHTER_LINK_STATUS_WORK_ID_FLAG_FINAL_WAIT_DASH);
    iVar4 = lib::L2CValue::as_integer(aLStack184);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack168,(bool)(bVar3 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack168);
    lib::L2CValue::~L2CValue(aLStack168);
    lib::L2CValue::~L2CValue(aLStack184);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack168,_FIGHTER_LINK_STATUS_WORK_ID_INT_FINAL_FRAME);
      iVar4 = lib::L2CValue::as_integer(aLStack168);
      app::lua_bind::WorkModule__dec_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4);
      lib::L2CValue::~L2CValue(aLStack168);
      lib::L2CValue::L2CValue(aLStack200,_FIGHTER_LINK_STATUS_WORK_ID_INT_FINAL_FRAME);
      iVar4 = lib::L2CValue::as_integer(aLStack200);
      iVar4 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack184,iVar4);
      lib::L2CValue::L2CValue(aLStack168,0);
      uVar5 = lib::L2CValue::operator<(aLStack184,aLStack168);
      lib::L2CValue::~L2CValue(aLStack168);
      lib::L2CValue::~L2CValue(aLStack184);
      lib::L2CValue::~L2CValue(aLStack200);
      if ((uVar5 & 1) == 0) {
        pfVar6 = (float *)app::lua_bind::PostureModule__pos_impl
                                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
        lib::L2CValue::L2CValue(aLStack248,*pfVar6);
        lib::L2CValue::L2CValue(aLStack232,pfVar6[1]);
        fVar10 = 0.0;
        lib::L2CValue::L2CValue(aLStack216,pfVar6[2]);
        FUN_7100010a70(aLStack184,param_2,aLStack248);
        lib::L2CValue::~L2CValue(aLStack216);
        lib::L2CValue::~L2CValue(aLStack232);
        lib::L2CValue::~L2CValue(aLStack248);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),5);
        pFVar8 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
        uVar16 = app::FighterSpecializer_Link::get_objective_pos(pFVar8);
        lib::L2CValue::L2CValue(aLStack296,(float)uVar16);
        lib::L2CValue::L2CValue(aLStack280,(float)((ulong)uVar16 >> 0x20));
        lib::L2CValue::L2CValue(aLStack264,fVar10);
        FUN_7100010a70(aLStack200,param_2,aLStack296);
        lib::L2CValue::~L2CValue(aLStack264);
        lib::L2CValue::~L2CValue(aLStack280);
        lib::L2CValue::~L2CValue(aLStack296);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x18cdc1683);
        this = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x1fbdb2615);
        this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x162d277af);
        this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack200,0x18cdc1683);
        this_02 = (L2CValue *)lib::L2CValue::operator[](aLStack200,0x1fbdb2615);
        this_03 = (L2CValue *)lib::L2CValue::operator[](aLStack200,0x162d277af);
        fVar10 = (float)lib::L2CValue::as_number(pLVar7);
        fVar11 = (float)lib::L2CValue::as_number(this);
        fVar12 = (float)lib::L2CValue::as_number(this_00);
        fVar13 = (float)lib::L2CValue::as_number(this_01);
        fVar14 = (float)lib::L2CValue::as_number(this_02);
        fVar15 = (float)lib::L2CValue::as_number(this_03);
        fVar10 = (float)app::sv_math::vec3_distance(fVar10,fVar11,fVar12,fVar13,fVar14,fVar15);
        lib::L2CValue::L2CValue(aLStack312,fVar10);
        lib::L2CValue::L2CValue
                  (aLStack168,_FIGHTER_LINK_STATUS_WORK_ID_FLOAT_FINAL_DISTANCE_TO_DESTINATION);
        iVar4 = lib::L2CValue::as_integer(aLStack168);
        fVar10 = (float)app::lua_bind::WorkModule__get_float_impl
                                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4);
        lib::L2CValue::L2CValue(aLStack328,fVar10);
        lib::L2CValue::~L2CValue(aLStack168);
        lib::L2CValue::L2CValue(aLStack168,0.0);
        lib::L2CValue::operator+(aLStack312,aLStack168);
        lib::L2CValue::~L2CValue(aLStack168);
        lib::L2CValue::L2CValue
                  (aLStack168,_FIGHTER_LINK_STATUS_WORK_ID_FLOAT_FINAL_DISTANCE_TO_DESTINATION);
        fVar10 = (float)lib::L2CValue::as_number((L2CValue *)(auStack360 + 0x10));
        iVar4 = lib::L2CValue::as_integer(aLStack168);
        app::lua_bind::WorkModule__set_float_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar10,iVar4);
        lib::L2CValue::~L2CValue(aLStack168);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack360 + 0x10));
        lib::L2CValue::L2CValue((L2CValue *)(auStack360 + 0x10),0xdf05c072b);
        lib::L2CValue::L2CValue((L2CValue *)auStack360,0x10c095e3bb);
        uVar5 = lib::L2CValue::as_integer((L2CValue *)(auStack360 + 0x10));
        uVar9 = lib::L2CValue::as_integer((L2CValue *)auStack360);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar5,uVar9);
        lib::L2CValue::L2CValue(aLStack168,fVar10);
        lib::L2CValue::~L2CValue((L2CValue *)auStack360);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack360 + 0x10));
        uVar5 = lib::L2CValue::operator<(aLStack328,aLStack312);
        if ((uVar5 & 1) != 0) {
          pLVar7 = aLStack328;
          lib::L2CValue::operator-(aLStack312,pLVar7);
          lib::L2CAgent::math_abs((L2CAgent *)auStack360,pLVar7);
          uVar5 = lib::L2CValue::operator<(aLStack168,(L2CValue *)(auStack360 + 0x10));
          lib::L2CValue::~L2CValue((L2CValue *)(auStack360 + 0x10));
          lib::L2CValue::~L2CValue((L2CValue *)auStack360);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue
                      ((L2CValue *)(auStack360 + 0x10),
                       _FIGHTER_LINK_STATUS_WORK_ID_FLAG_FINAL_FAILED);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack360 + 0x10));
            app::lua_bind::WorkModule__on_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4);
            lib::L2CValue::~L2CValue((L2CValue *)(auStack360 + 0x10));
          }
        }
        lib::L2CValue::~L2CValue(aLStack168);
        lib::L2CValue::~L2CValue(aLStack328);
        lib::L2CValue::~L2CValue(aLStack312);
        lib::L2CValue::~L2CValue(aLStack200);
        lVar1 = -0xa8;
      }
      else {
        lib::L2CValue::L2CValue(aLStack168,_FIGHTER_LINK_STATUS_WORK_ID_FLAG_FINAL_FAILED);
        iVar4 = lib::L2CValue::as_integer(aLStack168);
        app::lua_bind::WorkModule__on_flag_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4);
        lVar1 = -0x98;
      }
      lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

