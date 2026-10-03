
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000b5c10(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6,L2CValue *param_7,L2CValue *param_8,
                   L2CValue *param_9,L2CValue *param_10,L2CValue *param_11)

{
  L2CValue *this;
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  L2CTable *this_00;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  void *pvVar9;
  Weapon *pWVar10;
  GroundCollisionLine *pGVar11;
  undefined8 *puVar12;
  int iVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  long lVar18;
  undefined8 uVar19;
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  undefined8 auStack416 [2];
  undefined local_190 [32];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  undefined auStack272 [16];
  undefined auStack256 [32];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  undefined8 local_c0;
  undefined8 uStack184;
  ulong local_b0;
  undefined8 uStack168;
  ulong local_a0;
  undefined8 uStack152;
  
  lib::L2CValue::L2CValue(aLStack480,param_3);
  lib::L2CValue::L2CValue(aLStack496,param_7);
  lib::L2CValue::L2CValue(aLStack512,param_8);
  lib::L2CValue::L2CValue(aLStack528,param_5);
  lib::L2CValue::L2CValue(aLStack544,param_6);
  lib::L2CValue::L2CValue(aLStack560,param_9);
  this_00 = (L2CTable *)operator.new(0x48);
  lib::L2CTable::L2CTable(this_00,0);
  lib::L2CValue::L2CValue(param_1,this_00);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](param_1,0x4d114b4f6);
  lib::L2CValue::operator=(pLVar5,aLStack480);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](param_1,0xad4d40fc9);
  lib::L2CValue::operator=(pLVar5,aLStack496);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](param_1,0xaa3d33f5f);
  lib::L2CValue::operator=(pLVar5,aLStack512);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](param_1,0x6017d9eb2);
  lib::L2CValue::operator=(pLVar5,aLStack528);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](param_1,0x9e84e044e);
  lib::L2CValue::operator=(pLVar5,aLStack544);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](param_1,0x7b23db7b8);
  lib::L2CValue::L2CValue((L2CValue *)local_190,0);
  lib::L2CValue::operator=(pLVar5,(L2CValue *)local_190);
  lib::L2CValue::~L2CValue((L2CValue *)local_190);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](param_1,0xf14c59aa5);
  lib::L2CValue::operator=(pLVar5,aLStack560);
  lib::L2CValue::~L2CValue(aLStack560);
  lib::L2CValue::~L2CValue(aLStack544);
  lib::L2CValue::~L2CValue(aLStack528);
  lib::L2CValue::~L2CValue(aLStack512);
  lib::L2CValue::~L2CValue(aLStack496);
  lib::L2CValue::~L2CValue(aLStack480);
  lib::L2CValue::L2CValue((L2CValue *)local_190,1);
  lib::L2CValue::operator-(param_4,(L2CValue *)local_190);
  lib::L2CValue::~L2CValue((L2CValue *)local_190);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  if (-1 < iVar3) {
    pLVar5 = (L2CValue *)(local_190 + 0x10);
    this = (L2CValue *)(local_190 + 0x20);
    iVar13 = -1;
    do {
      bVar1 = lib::L2CValue::operator.cast.to.bool(param_10);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_190,1);
        uVar6 = lib::L2CValue::operator==(param_11,(L2CValue *)local_190);
        lib::L2CValue::~L2CValue((L2CValue *)local_190);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)local_190,
                     _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLAG_ARTICLE_WITH_TORCH);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)local_190);
          app::lua_bind::WorkModule__on_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4);
          lib::L2CValue::~L2CValue((L2CValue *)local_190);
        }
        lib::L2CValue::L2CValue((L2CValue *)local_190,1);
        lib::L2CValue::operator+(param_11,(L2CValue *)local_190);
        lib::L2CValue::~L2CValue((L2CValue *)local_190);
        lib::L2CValue::operator=(param_11,(L2CValue *)&local_a0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
      }
      lib::L2CValue::L2CValue(aLStack608,param_1);
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack608,0x4d114b4f6);
      uVar6 = lib::L2CValue::operator==(pLVar7,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_190,aLStack608);
        lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.0);
        FUN_71000b6d50(aLStack592,param_2,local_190,&local_a0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
        lib::L2CValue::~L2CValue((L2CValue *)local_190);
      }
      else {
        lib::L2CValue::L2CValue(aLStack464,aLStack608);
        lib::L2CValue::L2CValue(aLStack208,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        lib::L2CValue::L2CValue(aLStack224,0.0);
        lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),0.0);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack464,0x6017d9eb2);
        lib::L2CValue::L2CValue((L2CValue *)auStack256,pLVar7);
        lib::L2CValue::L2CValue((L2CValue *)local_190,0.5);
        lib::L2CValue::operator*((L2CValue *)auStack256,(L2CValue *)local_190);
        lib::L2CValue::~L2CValue((L2CValue *)local_190);
        lib::L2CValue::L2CValue(aLStack288,(L2CValue *)auStack272);
        lib::L2CValue::L2CValue(aLStack304,0.0);
        lib::L2CValue::L2CValue(aLStack320,(L2CValue *)auStack256);
        lib::L2CValue::L2CValue(aLStack336,0.0);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack464,0xad4d40fc9);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack464,0xaa3d33f5f);
        lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.0);
        uVar6 = lib::L2CValue::as_number(pLVar7);
        lVar18 = lib::L2CValue::as_number(pLVar8);
        uVar14 = lib::L2CValue::as_number((L2CValue *)&local_a0);
        local_190._0_8_ = (void **)(uVar6 & 0xffffffff | lVar18 << 0x20);
        local_190._8_8_ = (lua_State *)(ulong)uVar14;
        fVar15 = (float)app::SlopeModuleSimple::gravity_angle_pos((Vector3f *)local_190);
        lib::L2CValue::L2CValue(aLStack352,fVar15);
        lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
        lib::L2CValue::L2CValue((L2CValue *)local_190,0.0);
        pLVar7 = (L2CValue *)local_190;
        uVar6 = lib::L2CValue::operator==(aLStack352,pLVar7);
        lib::L2CValue::~L2CValue((L2CValue *)local_190);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::operator-(aLStack352);
          fVar15 = (float)lib::L2CValue::as_number(aLStack320);
          fVar16 = (float)lib::L2CValue::as_number(aLStack336);
          fVar17 = (float)lib::L2CValue::as_number((L2CValue *)&local_a0);
          uVar19 = app::sv_math::vec2_rot(fVar15,fVar16,fVar17);
          lib::L2CValue::L2CValue((L2CValue *)local_190,(float)uVar19);
          lib::L2CValue::L2CValue(pLVar5,(float)((ulong)uVar19 >> 0x20));
          lib::L2CValue::operator=(aLStack320,(L2CValue *)local_190);
          lib::L2CValue::operator=(aLStack336,pLVar5);
          lib::L2CValue::~L2CValue(pLVar5);
          lib::L2CValue::~L2CValue((L2CValue *)local_190);
          lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
          lib::L2CValue::operator-(aLStack352);
          fVar15 = (float)lib::L2CValue::as_number(aLStack288);
          fVar16 = (float)lib::L2CValue::as_number(aLStack304);
          fVar17 = (float)lib::L2CValue::as_number((L2CValue *)&local_a0);
          uVar19 = app::sv_math::vec2_rot(fVar15,fVar16,fVar17);
          lib::L2CValue::L2CValue((L2CValue *)local_190,(float)uVar19);
          lib::L2CValue::L2CValue(pLVar5,(float)((ulong)uVar19 >> 0x20));
          lib::L2CValue::operator=(aLStack288,(L2CValue *)local_190);
          pLVar7 = pLVar5;
          lib::L2CValue::operator=(aLStack304,pLVar5);
          lib::L2CValue::~L2CValue(pLVar5);
          lib::L2CValue::~L2CValue((L2CValue *)local_190);
          lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
        }
        lib::L2CAgent::math_abs((L2CAgent *)auStack256,pLVar7);
        lib::L2CValue::L2CValue((L2CValue *)local_190,0.0);
        uVar6 = lib::L2CValue::operator<((L2CValue *)local_190,(L2CValue *)&local_a0);
        lib::L2CValue::~L2CValue((L2CValue *)local_190);
        lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
        if ((uVar6 & 1) == 0) {
LAB_71000b63ac:
          pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),4);
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack464,0xad4d40fc9);
          lib::L2CValue::operator+(pLVar8,aLStack320);
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack464,0xaa3d33f5f);
          lib::L2CValue::operator+(pLVar8,aLStack336);
          lib::L2CValue::L2CValue((L2CValue *)&local_c0,0.0);
          lib::L2CValue::L2CValue((L2CValue *)auStack416,false);
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack464,0x9e84e044e);
          pWVar10 = (Weapon *)lib::L2CValue::as_pointer(pLVar7);
          uVar6 = lib::L2CValue::as_number((L2CValue *)&local_a0);
          lVar18 = lib::L2CValue::as_number((L2CValue *)&local_b0);
          uVar14 = lib::L2CValue::as_number((L2CValue *)&local_c0);
          local_190._0_8_ = (void **)(uVar6 & 0xffffffff | lVar18 << 0x20);
          local_190._8_8_ = (lua_State *)(ulong)uVar14;
          bVar2 = lib::L2CValue::as_bool((L2CValue *)auStack416);
          fVar15 = (float)lib::L2CValue::as_number(pLVar8);
          app::WeaponSpecializer_PickelTrolley::generate_rail
                    (pWVar10,(Vector3f *)local_190,(bool)(bVar2 & 1),fVar15);
          lib::L2CValue::~L2CValue((L2CValue *)auStack416);
          lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack464,0xad4d40fc9);
          lib::L2CValue::operator+(pLVar7,aLStack320);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack464,0xad4d40fc9);
          lib::L2CValue::operator=(pLVar7,(L2CValue *)local_190);
          lib::L2CValue::~L2CValue((L2CValue *)local_190);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack464,0xaa3d33f5f);
          lib::L2CValue::operator+(pLVar7,aLStack336);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack464,0xaa3d33f5f);
          lib::L2CValue::operator=(pLVar7,(L2CValue *)local_190);
          lib::L2CValue::~L2CValue((L2CValue *)local_190);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack464,0x7b23db7b8);
          lib::L2CValue::L2CValue((L2CValue *)local_190,1);
          lib::L2CValue::operator+(pLVar7,(L2CValue *)local_190);
          lib::L2CValue::~L2CValue((L2CValue *)local_190);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack464,0x7b23db7b8);
          lib::L2CValue::operator=(pLVar7,(L2CValue *)&local_a0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
          lib::L2CValue::L2CValue(aLStack592,true);
        }
        else {
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack464,0xad4d40fc9);
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack464,0xaa3d33f5f);
          lib::L2CValue::operator+(aLStack320,aLStack288);
          lib::L2CValue::operator+(aLStack336,aLStack304);
          lib::L2CValue::L2CValue(aLStack448,true);
          uVar6 = lib::L2CValue::as_number(pLVar7);
          uVar14 = lib::L2CValue::as_number(pLVar8);
          local_a0 = uVar6 & 0xffffffff | (ulong)uVar14 << 0x20;
          uStack152 = 0;
          uVar6 = lib::L2CValue::as_number((L2CValue *)auStack416);
          uVar14 = lib::L2CValue::as_number(aLStack432);
          local_b0 = uVar6 & 0xffffffff | (ulong)uVar14 << 0x20;
          uStack168 = 0;
          uVar6 = lib::L2CValue::as_number(aLStack224);
          uVar14 = lib::L2CValue::as_number((L2CValue *)(auStack256 + 0x10));
          local_c0 = (BattleObjectModuleAccessor *)(uVar6 & 0xffffffff | (ulong)uVar14 << 0x20);
          uStack184 = 0;
          bVar2 = lib::L2CValue::as_bool(aLStack448);
          pvVar9 = (void *)app::lua_bind::GroundModule__ray_check_get_line_hit_pos_impl
                                     (*(BattleObjectModuleAccessor **)(param_2 + 0x40),
                                      (Vector2f *)&local_a0,(Vector2f *)&local_b0,
                                      (Vector2f *)&local_c0,(bool)(bVar2 & 1));
          if (pvVar9 == (void *)0x0) {
            lib::L2CValue::L2CValue((L2CValue *)local_190,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)local_190,pvVar9);
          }
          lib::L2CValue::L2CValue(pLVar5,(float)local_c0);
          lib::L2CValue::L2CValue(this,local_c0._4_4_);
          lib::L2CValue::operator=(aLStack208,(L2CValue *)local_190);
          lib::L2CValue::operator=(aLStack224,pLVar5);
          lib::L2CValue::operator=((L2CValue *)(auStack256 + 0x10),this);
          lib::L2CValue::~L2CValue(this);
          lib::L2CValue::~L2CValue(pLVar5);
          lib::L2CValue::~L2CValue((L2CValue *)local_190);
          lib::L2CValue::~L2CValue(aLStack448);
          lib::L2CValue::~L2CValue(aLStack432);
          lib::L2CValue::~L2CValue((L2CValue *)auStack416);
          uVar6 = lib::L2CValue::operator==(aLStack208,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
          if ((uVar6 & 1) != 0) goto LAB_71000b63ac;
          pGVar11 = (GroundCollisionLine *)lib::L2CValue::as_pointer(aLStack208);
          bVar2 = app::sv_ground_collision_line::is_floor(pGVar11);
          lib::L2CValue::L2CValue((L2CValue *)local_190,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)local_190);
          lib::L2CValue::~L2CValue((L2CValue *)local_190);
          if ((bVar1 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack592,false);
          }
          else {
            pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack464,0xf14c59aa5);
            bVar1 = lib::L2CValue::operator.cast.to.bool(pLVar7);
            if ((bVar1 & 1U) == 0) goto LAB_71000b63ac;
            pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack464,0xad4d40fc9);
            lib::L2CValue::operator-(pLVar7,aLStack224);
            pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack464,0xaa3d33f5f);
            lib::L2CValue::operator-(pLVar7,(L2CValue *)(auStack256 + 0x10));
            lib::L2CValue::operator*((L2CValue *)&local_a0,(L2CValue *)&local_a0);
            lib::L2CValue::operator*((L2CValue *)&local_b0,(L2CValue *)&local_b0);
            pLVar7 = aLStack432;
            lib::L2CValue::operator+((L2CValue *)auStack416,pLVar7);
            lib::L2CAgent::math_sqrt((L2CAgent *)local_190,pLVar7);
            lib::L2CValue::~L2CValue((L2CValue *)local_190);
            lib::L2CValue::~L2CValue(aLStack432);
            lib::L2CValue::~L2CValue((L2CValue *)auStack416);
            pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack464,0x4d114b4f6);
            lib::L2CValue::operator=(pLVar7,aLStack208);
            pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack464,0xad4d40fc9);
            lib::L2CValue::operator=(pLVar7,aLStack224);
            pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack464,0xaa3d33f5f);
            pLVar8 = (L2CValue *)(auStack256 + 0x10);
            lib::L2CValue::operator=(pLVar7,pLVar8);
            lib::L2CAgent::math_abs((L2CAgent *)auStack272,pLVar8);
            puVar12 = &local_c0;
            uVar6 = lib::L2CValue::operator<((L2CValue *)local_190,(L2CValue *)puVar12);
            lib::L2CValue::~L2CValue((L2CValue *)local_190);
            if ((uVar6 & 1) == 0) {
              lib::L2CAgent::math_abs((L2CAgent *)auStack272,(L2CValue *)puVar12);
              lib::L2CValue::operator-((L2CValue *)&local_c0,(L2CValue *)local_190);
              lib::L2CValue::~L2CValue((L2CValue *)local_190);
              lib::L2CValue::L2CValue((L2CValue *)local_190,0.0);
              uVar6 = lib::L2CValue::operator<((L2CValue *)auStack256,(L2CValue *)local_190);
              lib::L2CValue::~L2CValue((L2CValue *)local_190);
              if ((uVar6 & 1) != 0) {
                lib::L2CValue::operator-((L2CValue *)auStack416);
                lib::L2CValue::operator=((L2CValue *)auStack416,(L2CValue *)local_190);
                lib::L2CValue::~L2CValue((L2CValue *)local_190);
              }
              lib::L2CValue::L2CValue((L2CValue *)local_190,aLStack464);
              lib::L2CValue::L2CValue(aLStack432,(L2CValue *)auStack416);
              FUN_71000b6d50(aLStack592,param_2,local_190,aLStack432);
              lib::L2CValue::~L2CValue(aLStack432);
              lib::L2CValue::~L2CValue((L2CValue *)local_190);
              puVar12 = auStack416;
            }
            else {
              lib::L2CValue::operator-((L2CValue *)auStack272);
              lib::L2CValue::L2CValue((L2CValue *)auStack416,aLStack464);
              lib::L2CValue::L2CValue(aLStack432,(L2CValue *)local_190);
              FUN_71000b6d50(aLStack592,param_2,auStack416,aLStack432);
              lib::L2CValue::~L2CValue(aLStack432);
              lib::L2CValue::~L2CValue((L2CValue *)auStack416);
              puVar12 = (undefined8 *)local_190;
            }
            lib::L2CValue::~L2CValue((L2CValue *)puVar12);
            lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
            lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
            lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
          }
        }
        lib::L2CValue::~L2CValue(aLStack352);
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue((L2CValue *)auStack272);
        lib::L2CValue::~L2CValue((L2CValue *)auStack256);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack464);
      }
      lib::L2CValue::operator!(aLStack592);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack576);
      lib::L2CValue::~L2CValue(aLStack576);
      lib::L2CValue::~L2CValue(aLStack592);
      lib::L2CValue::~L2CValue(aLStack608);
    } while (((bVar1 & 1U) == 0) && (iVar13 = iVar13 + 1, iVar13 < iVar3));
  }
  return;
}

